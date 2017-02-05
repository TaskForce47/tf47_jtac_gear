class CfgFunctions
{
	class TF47_functions
	{
		tag = "TF47";
		class functions
		{
			file = "\TF47_JTAC_GEAR\code";
			class takeItem {};
			class putItem {};
			class backpackMagazines {};
			class switchBackpack {};
		};
		class init
		{
			file="TF47_JTAC_GEAR\code\bootstrap";
			class postInit
			{
				postInit = 1;
			};
		};		
	};
};	