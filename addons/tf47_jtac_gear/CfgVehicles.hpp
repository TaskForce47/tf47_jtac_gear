class CfgVehicles {
    class ReammoBox;
    
    class tf47_gd3d : ReammoBox {
        author = "Loki087";
        displayName = "HG3D RadioPack";
        descriptionShort = "HG3D RadioPack long range radio 20km";
        scope = 2;
        scopeCurator = 2;
        
        picture = "\tf47_jtac_gear\data\pictures\radio_pack.paa";
        model="\tf47_jtac_gear\models\radio_pack.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\tf47_jtac_gear\data\radio_bp_co.paa"};
        
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
};