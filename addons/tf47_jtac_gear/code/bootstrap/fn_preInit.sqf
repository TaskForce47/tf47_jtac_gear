diag_log ("TF47_JTAC_GEAR preInit");
private ['_code', '_function', '_file'];
{
    	_code = '';
    	_function = _x select 0;
    	_file = _x select 1;
    	_code = compileFinal (preprocessFileLineNumbers _file);
		diag_log ("TF47_JTAC_GEAR - compiled function: " + str _function);
		missionNamespace setVariable [_function, _code];
}forEach
[
	['TF47_fnc_example','TF47_JTAC_GEAR\code\TF47_fnc_example.sqf']
];

true
