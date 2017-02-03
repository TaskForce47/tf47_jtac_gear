class CfgVehicles
{
	class Static;
	class Bag_Base;
	class TF47_Backpack_Base: Bag_Base
	{
		scope = 1;
		author = "Loki087";
		model="\TF47_JTAC_GEAR\models\radio_pack.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[]={"\TF47_JTAC_GEAR\data\radio_bp_co.paa"};
		maximumLoad = 280;
		mass = 50;
		vehicleClass = "Backpacks";
		editorCategory = "TF47_Category";	
		
	};
	class TF47_Static_Base : Static
	{
		scope = 1;
		model = "";
		displayName = "";
		faction = "Empty";
		vehicleClass = "Static";
		editorCategory = "TF47_Category";	
		author = "Loki087";		
	};

	
	class TF47_HG3D_RadioPack : TF47_Backpack_Base
	{
        descriptionShort = "HG3D RadioPack long range radio 20km";
        scope = 2;
        scopeCurator = 2;
		displayName="HG3D RadioPack";
		model="\TF47_JTAC_GEAR\models\radio_pack.p3d";
		picture="\TF47_JTAC_GEAR\data\pictures\radio_pack.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[]={"\TF47_JTAC_GEAR\data\radio_bp_co.paa"};
		editorPreview = "\TF47_JTAC_GEAR\data\pictures\radio_pack.paa";
        maximumLoad = 240;
		mass = 80;
		isbackpack = 1;        
        // TFAR
        tf_range = 20000;
        tf_hasLRradio = 1;
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "rt1523g_radio_dialog";
        tf_subtype = "digital_lr";		
	};		
	class TF47_HG3D_RadioPack_Stativ : TF47_Backpack_Base
	{
        descriptionShort = "HG3D RadioPack long range radio 20km";
        scope = 2;
        scopeCurator = 2;
		displayName="HG3D RadioPack Stativ";
		model="\TF47_JTAC_GEAR\models\radio_pack_stativ.p3d";
		picture="\TF47_JTAC_GEAR\data\pictures\radio_pack.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[]={"\TF47_JTAC_GEAR\data\radio_bp_co.paa"};
		editorPreview = "\TF47_JTAC_GEAR\data\pictures\radio_pack.paa";
        maximumLoad = 240;
		mass = 80;
		isbackpack = 1;        
        // TFAR
        tf_range = 20000;
        tf_hasLRradio = 1;
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "rt1523g_radio_dialog";
        tf_subtype = "digital_lr";	
 /*       class AnimationSources
        {
            class HideStativ
            {
                source = "user";
                animPeriod = 0.00001;
                initPhase = 0;
            };
        };	*/	
	};	
	class TF47_Soflam : TF47_Static_Base 
	{
		scope = 2;
		model = "\TF47_JTAC_GEAR\models\soflam.p3d";
		displayName = "TF47 Soflam";
		editorPreview = "\TF47_JTAC_GEAR\data\pictures\soflam.paa";
	};		
};
