/*
	TF47_fnc_takeItem
	switches the backpack class 
	TODO:
		-backup backpack content and readd it
		-switch back to default backpack after assembly of soflam (Eventhandlers WeaponAssembled / WeaponDisassembled ???)	
*/	
_unit = _this select 0;
_container = _this select 1;
_item = _this select 2;
if(_item isEqualTo "TF47_Soflam_Stativ") then 
{
	if (typeOf(backpackContainer _unit) isEqualTo "TF47_HG3D_RadioPack")then 
	{
		[_unit,"TF47_HG3D_RadioPack_Stativ"] call TF47_fnc_switchBackpack;
		_unit addItem "TF47_Soflam_Stativ";
	};
};



