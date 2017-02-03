diag_log ("TF47_JTAC_GEAR postInit");
player addEventHandler ["Take",{_this call TF47_fnc_takeItem}];
player addEventHandler ["Put",{_this call TF47_fnc_putItem}];
true