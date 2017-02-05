/*
 * Author: DerZade
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Classname of new backpack
 *
 * Return Value:
 * Nothing
 *
 * Example:
 * [player, "tf_mr3000"] call TF47_fnc_switchBackpack;
 *
 * Public: No
 */
params ["_unit", "_newBackpackClass"];

private _backpackitems = itemCargo (backpackContainer _unit) + weaponCargo (backpackContainer _unit) + backpackCargo (backpackContainer _unit);
private _backpackmags = [_unit] call TF47_fnc_backpackMagazines;

private _radioSettings = [];

if !((_unit call TFAR_fnc_backpackLr) isEqualTo []) then {
     _radioSettings = (_unit call TFAR_fnc_backpackLr) call TFAR_fnc_getLrSettings;
};

//handle attachments in the backpack
{
     //remove weapon and add base wepaon
     _backpackitems deleteAt (_backpackitems find (_x select 0));
     _backpackitems pushBack ((_x select 0) call BIS_fnc_baseWeapon);

     //add attachments separately
     _backpackitems pushBack (_x select 1);
     _backpackitems pushBack (_x select 2);
     _backpackitems pushBack (_x select 3);
     _backpackitems pushBack (_x select 5);

     //add magazine
     private _mag = +(_x select 4);
     _mag pushBack 1;
     _backpackmags pushBack _mag;
} forEach weaponsItems (backpackContainer _unit);

//remove old backpack
removeBackpackGlobal _unit;

//add new backpack
_unit addBackpackGlobal _newBackpackClass;
clearAllItemsFromBackpack _unit;

//add backpack items (includes backpacks)
{
     //check wether item is a backpack
     if (isClass (configFile>> "CfgVehicles" >> _x)) then {
          (backpackContainer _unit) addBackpackCargoGlobal [_x, 1];
     } else {
          (backpackContainer _unit) addItemCargo [_x, 1];
     };
} forEach _backpackitems;

//add backpack magazines
{
	if(count _x isEqualTo 2)then {	//_backpackmags=[["TF47_Soflam_Stativ",1,1],[1]] fix: the [1] throws errors- 
		(backpackContainer _unit) addMagazineAmmoCargo [(_x select 0), (_x select 2), (_x select 1)];
	};
} forEach _backpackmags;

//apply radio settings
if !(_radioSettings isEqualTo []) then {
     private _radio = _unit call TFAR_fnc_backpackLr;
     [_radio select 0, _radio select 1, _radioSettings] call TFAR_fnc_setLrSettings;
};
