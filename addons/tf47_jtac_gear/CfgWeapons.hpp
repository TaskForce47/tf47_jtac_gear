class CfgWeapons
{
	class ItemCore;
	class Binocular;
	class Laserdesignator;
	class InventoryItem_Base_F;
	
    class TF47_Soflam_Stativ: ItemCore 
	{
        scope = 2;
		author = "Loki087";
        picture = "\TF47_JTAC_GEAR\data\pictures\soflam.paa";
        displayName = "TF47 Soflam stativ";
		model = "\TF47_JTAC_GEAR\models\stativ.p3d";
		descriptionShort = "Used to mount a Laser Marker.";
        descriptionUse = "";
        class ItemInfo: InventoryItem_Base_F 
		{
            mass = 2;
        };	
	};	
	class TF47_SOFLAM_Marker: Binocular
	{
		author="Loki087";
		_generalMacro="Laserdesignator";
		model="\TF47_JTAC_GEAR\models\soflam_marker.p3d";
		modelOptics="\A3\Weapons_F_beta\Binocular\lasermarker_optics";
		opticsPPEffects[]=
		{
			"OpticsCHAbera1",
			"OpticsBlur1"
		};
		displayName="TF47 SOFLAM Marker";
		descriptionUse="$STR_A3_cfgWeapons_Default_Laserdesignator1";
		picture="\A3\Weapons_F\Data\UI\gear_lasermarker_CA.paa";
		magazines[]=
		{
			"Laserbatteries"
		};
		cursor="laserDesignator";
		cursorAim="EmptyCursor";
		cursorAimOn="EmptyCursor";
		showSwitchAction=1;
		simulation="weapon";
		forceOptics=0;
		class WeaponSlotsInfo
		{
			mass=20;
		};
		Laser=1;
		descriptionShort="$STR_DSS_Laserdesignator";
		weaponInfoType="RscOptics_LaserDesignator";
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={2};
		opticsZoomMin=0.0099999998;
		opticsZoomMax=0.050000001;
		opticsZoomInit=0.050000001;
		distanceZoomMin=100;
		distanceZoomMax=2300;
		minRange=150;
		midRange=500;
		maxRange=5000;
	};	
};	