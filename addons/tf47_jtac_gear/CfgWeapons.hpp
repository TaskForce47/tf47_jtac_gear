class CfgWeapons
{
	class ItemCore;
	class Binocular;
	class Laserdesignator;
	class TF47_SOFLAM_Marker: Binocular
	{
		author="Loki087";
		displayName="TF47 SOFLAM Marker";
		descriptionShort="";
		picture = "\TF47_JTAC_GEAR\data\pictures\soflam.paa";
		model="\TF47_JTAC_GEAR\models\soflam_marker.p3d";
		modelOptics="";
		opticsPPEffects[]={"OpticsCHAbera1","OpticsBlur1"};
		simulation="weapon";
		forceOptics=0;
		Laser=1;
		magazines[]={"Laserbatteries"};
		weaponInfoType="RscWeaponRangeFinder";
		visionMode[]={"Normal","NVG","TI"};
		thermalMode[]={0,1};
		class WeaponSlotsInfo{mass=50;};
		cursor="laserDesignator";
		cursorAim="EmptyCursor";
		cursorAimOn="EmptyCursor";
		showSwitchAction=1;
	};
};	