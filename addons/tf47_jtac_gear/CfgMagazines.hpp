class CfgMagazines
{
	class CA_Magazine;		/*Extern*/
	class  TF47_MAG_Default:	CA_Magazine
	{
		author = "Loki087";
		scope = 1;
		count = 1;
		type = 256;
		displayName = "";
		picture = "";
		model = "";
		descriptionShort = "";
		mass = 20;
		vehicleClass = "Magazines";
		editorCategory = "TF47_Category";		
	};
	class TF47_Soflam_Stativ: TF47_MAG_Default
	{
		author = "Loki087";
		scope = 2;
		count = 1;
		type = 256;
		displayName = "TF47 Soflam stativ";
		picture = "\TF47_JTAC_GEAR\data\pictures\soflam.paa";
		model = "\TF47_JTAC_GEAR\models\stativ.p3d";
		descriptionShort = "Used to mount a Laser Marker";
		mass = 20;
		editorPreview = "\TF47_JTAC_GEAR\data\pictures\soflam.paa";
	};
};
