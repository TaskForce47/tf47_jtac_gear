class CfgPatches
{
  class task_force_radio_items
  {
    units[] = {
		"TF47_HG3D_RadioPack"
    };
    requiredVersion = 1.0;
    requiredAddons[] = {"CBA_Main","cba_settings","task_force_radio_items"};
    author = "Loki087";
    Url = "";
    version = 0.1.0;
    versionStr = "0.1.0";
    versionAr[] = {0,1,0};
  };
};

class CfgVehicles {
  class TFAR_Bag_Base;
  class TF47_HG3D_RadioPack: TFAR_Bag_Base
  {
    author = "Loki087";
    displayName = "TF47 HG3D RadioPack";
    descriptionShort = "TF47 HG3D RadioPack long range radio 20km";
    picture = "\TF47_assets\data\pictures\radio_pack.paa";
    model="\TF47_assets\models\radio_pack.p3d";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\TF47_assets\data\radio_bp_co.paa"};
    maximumLoad = 50;
    mass = 80;
    scope = 2;
    scopeCurator = 2;
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
  };
};