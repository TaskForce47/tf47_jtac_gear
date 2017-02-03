/*
	TF47_fnc_switchBackpack
*/
_unit = _this select 0;
_newBackpackClass = _this select 1;
_content = backpackItems _unit;
removeBackpack _unit;
_unit addBackpack _newBackpackClass;
{_unit addItemToBackpack _x}count _content;
true
