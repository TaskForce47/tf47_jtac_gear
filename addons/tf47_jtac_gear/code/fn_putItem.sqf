/*
	TF47_fnc_putItem
	switches the backpack class 
	TODO:
		-backup backpack content and readd it
		-switch back to default backpack after assembly of soflam (Eventhandlers WeaponAssembled / WeaponDisassembled ???)		
*/
params ["_unit","_container","_item"];
if(_item isEqualTo "TF47_Soflam_Stativ") then 
{
	if (typeOf(backpackContainer _unit) isEqualTo "TF47_HG3D_RadioPack_Stativ")then 
	{
		[_unit,"TF47_HG3D_RadioPack"] call TF47_fnc_switchBackpack;
	};
};
