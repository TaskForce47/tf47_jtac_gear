#include "BIS_AddonInfo.hpp"
class CfgPatches
{
        class TF47_JTAC_GEAR
        {
			requiredVersion = 1.66;
			requiredAddons[] = {"A3_Characters_F_Heads","a3_characters_f", "a3_characters_f_beta", "a3_characters_f_epa", "a3_characters_f_epb", "a3_characters_f_epc", "a3_characters_f_gamma", "a3_data_f", "a3_weapons_f", "a3_weapons_f_beta", "a3_weapons_f_bootcamp", "a3_weapons_f_epa", "a3_weapons_f_epb", "a3_weapons_f_epc", "a3_weapons_f_gamma", "a3_rocks_f", "a3_anims_f", "a3_weapons_f_mark", "a3_map_altis_scenes", "a3_map_vr_scenes", "a3_map_stratis_scenes", "a3_ui_f", "a3_3den"};
			version="1.0";
			projectName="TF47_JTAC_GEAR";
			author="Loki087";
			url = "https://github.com/TaskForce47/tf47_jtac_gear";
			units[] = 
			{
				"TF47_HG3D_RadioPack","TF47_HG3D_RadioPack_Stativ"
			};
			weapons[] = 
			{
				"TF47_SOFLAM_Marker"
			};			   
        };
};
class CfgEditorCategories
{
	class TF47_Category 
	{
		displayName = "TF47_JTAC_GEAR";
	};
};
#include "CfgVehicles.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"
#include "CfgFunctions.hpp"



