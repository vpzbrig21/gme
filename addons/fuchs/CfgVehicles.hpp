class CfgVehicles {
    class gm_wheeled_APC_base;
    class gm_fuchs_base: gm_wheeled_APC_base {
        fuelCapacity = "780 * 0.165";
        ace_refuel_fuelCapacity = 390;
		ace_refuel_canReceive = 1;
		ace_refuel_flowRate = 1;
        #include "CfgACRE_PRC117_base.hpp"
        class ACE_Actions;
    };
    class gm_fuchsa0_base: gm_fuchs_base {
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions;
        };
    };
    class gm_fuchsa0_command_base: gm_fuchsa0_base {
        #include "CfgACRE_PRC117_command.hpp"
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                class gme_antenna_up {
                    displayName = ECSTRING(core,AntennaUp);
                    radius = 4;
                    condition = "_target animationSourcePhase 'antennamast_01_elev_source' == 0";
                    statement = "_target animateSource ['antennamast_01_elev_source',1]";
                };
                class gme_antenna_down {
                    displayName = ECSTRING(core,AntennaDown);
                    radius = 4;
                    condition = "_target animationSourcePhase 'antennamast_01_elev_source' == 1";
                    statement = "_target animateSource ['antennamast_01_elev_source',0]";
                };
                class gme_fuchs_camo {
                    displayName = ECSTRING(core,FuchsCamo);
                    radius = 4;
                    condition = "true";
                    statement = "";
                    class gme_camonet_show {
                        displayName = ECSTRING(core,CamoNetShow);
                        radius = 4;
                        condition = "_target animationSourcePhase 'camonet_hull_unhide' == 0";
                        statement = "_target animateSource ['camonet_hull_unhide',1]";
                    };
                    class gme_camonet_hide: gme_camonet_show {
                        displayName = ECSTRING(core,CamoNetHide);
                        condition = "_target animationSourcePhase 'camonet_hull_unhide' == 1 && _target animationSourcePhase 'camofoilage_hull_unhide' == 0";
                        statement = "_target animateSource ['camonet_hull_unhide',0]";
                    };
                    class gme_camofoilage_show {
                        displayName = ECSTRING(core,CamoFoilageShow);
                        radius = 4;
                        condition = "_target animationSourcePhase 'camofoilage_hull_unhide' == 0 && _target animationSourcePhase 'camonet_hull_unhide' == 1";
                        statement = "_target animateSource ['camofoilage_hull_unhide',1]";
                    };
                    class gme_camofoilage_hide: gme_camofoilage_show {
                        displayName = ECSTRING(core,CamoFoilageHide);
                        condition = "_target animationSourcePhase 'camofoilage_hull_unhide' == 1";
                        statement = "_target animateSource ['camofoilage_hull_unhide',0]";
                    };
                };
            };
        };
    };
    class gm_fuchsa0_reconnaissance_base: gm_fuchsa0_base {
        #include "CfgACRE_PRC117_base.hpp"
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                class gme_fuchs_camo {
                    displayName = ECSTRING(core,FuchsCamo);
                    radius = 4;
                    condition = "true";
                    statement = "";
                    class gme_camonet_show {
                        displayName = ECSTRING(core,CamoNetShow);
                        radius = 4;
                        condition = "_target animationSourcePhase 'camonet_hull_unhide' == 0";
                        statement = "_target animateSource ['camonet_hull_unhide',1]";
                    };
                    class gme_camonet_hide: gme_camonet_show {
                        displayName = ECSTRING(core,CamoNetHide);
                        condition = "_target animationSourcePhase 'camonet_hull_unhide' == 1 && _target animationSourcePhase 'camofoilage_hull_unhide' == 0";
                        statement = "_target animateSource ['camonet_hull_unhide',0]";
                    };
                    class gme_camofoilage_show {
                        displayName = ECSTRING(core,CamoFoilageShow);
                        radius = 4;
                        condition = "_target animationSourcePhase 'camofoilage_hull_unhide' == 0 && _target animationSourcePhase 'camonet_hull_unhide' == 1";
                        statement = "_target animateSource ['camofoilage_hull_unhide',1]";
                    };
                    class gme_camofoilage_hide: gme_camofoilage_show {
                        displayName = ECSTRING(core,CamoFoilageHide);
                        condition = "_target animationSourcePhase 'camofoilage_hull_unhide' == 1";
                        statement = "_target animateSource ['camofoilage_hull_unhide',0]";
                    };
                };
            };
        };
    };
    class gm_fuchsa0_engineer_base: gm_fuchsa0_base {
        #include "CfgACRE_PRC117_base.hpp"
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                class gme_fuchs_camo {
                    displayName = ECSTRING(core,FuchsCamo);
                    radius = 4;
                    condition = "true";
                    statement = "";
                    class gme_camonet_show {
                        displayName = ECSTRING(core,CamoNetShow);
                        radius = 4;
                        condition = "_target animationSourcePhase 'camonet_hull_unhide' == 0";
                        statement = "_target animateSource ['camonet_hull_unhide',1]";
                    };
                    class gme_camonet_hide: gme_camonet_show {
                        displayName = ECSTRING(core,CamoNetHide);
                        condition = "_target animationSourcePhase 'camonet_hull_unhide' == 1 && _target animationSourcePhase 'camofoilage_hull_unhide' == 0";
                        statement = "_target animateSource ['camonet_hull_unhide',0]";
                    };
                    class gme_camofoilage_show {
                        displayName = ECSTRING(core,CamoFoilageShow);
                        radius = 4;
                        condition = "_target animationSourcePhase 'camofoilage_hull_unhide' == 0 && _target animationSourcePhase 'camonet_hull_unhide' == 1";
                        statement = "_target animateSource ['camofoilage_hull_unhide',1]";
                    };
                    class gme_camofoilage_hide: gme_camofoilage_show {
                        displayName = ECSTRING(core,CamoFoilageHide);
                        condition = "_target animationSourcePhase 'camofoilage_hull_unhide' == 1";
                        statement = "_target animateSource ['camofoilage_hull_unhide',0]";
                    };
                };
            };
        };
    };
    class gm_fuchsa0_medic_base: gm_fuchsa0_base {
        #include "CfgACRE_PRC117_base.hpp"
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                class gme_fuchs_camo {
                    displayName = ECSTRING(core,FuchsCamo);
                    radius = 4;
                    condition = "true";
                    statement = "";
                    class gme_camonet_show {
                        displayName = ECSTRING(core,CamoNetShow);
                        radius = 4;
                        condition = "_target animationSourcePhase 'camonet_hull_unhide' == 0";
                        statement = "_target animateSource ['camonet_hull_unhide',1]";
                    };
                    class gme_camonet_hide: gme_camonet_show {
                        displayName = ECSTRING(core,CamoNetHide);
                        condition = "_target animationSourcePhase 'camonet_hull_unhide' == 1 && _target animationSourcePhase 'camofoilage_hull_unhide' == 0";
                        statement = "_target animateSource ['camonet_hull_unhide',0]";
                    };
                    class gme_camofoilage_show {
                        displayName = ECSTRING(core,CamoFoilageShow);
                        radius = 4;
                        condition = "_target animationSourcePhase 'camofoilage_hull_unhide' == 0 && _target animationSourcePhase 'camonet_hull_unhide' == 1";
                        statement = "_target animateSource ['camofoilage_hull_unhide',1]";
                    };
                    class gme_camofoilage_hide: gme_camofoilage_show {
                        displayName = ECSTRING(core,CamoFoilageHide);
                        condition = "_target animationSourcePhase 'camofoilage_hull_unhide' == 1";
                        statement = "_target animateSource ['camofoilage_hull_unhide',0]";
                    };
                };
            };
        };
    };
    class gm_fuchsa1_base: gm_fuchs_base {
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions;
        };
    };
    class gm_fuchsa1_jammer_base: gm_fuchsa1_base {
        #include "CfgACRE_PRC117_base.hpp"
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                class gme_fuchs_camo {
                    displayName = ECSTRING(core,FuchsCamo);
                    radius = 4;
                    condition = "true";
                    statement = "";
                    class gme_camonet_show {
                        displayName = ECSTRING(core,CamoNetShow);
                        radius = 4;
                        condition = "_target animationSourcePhase 'camonet_hull_unhide' == 0";
                        statement = "_target animateSource ['camonet_hull_unhide',1]";
                    };
                    class gme_camonet_hide: gme_camonet_show {
                        displayName = ECSTRING(core,CamoNetHide);
                        condition = "_target animationSourcePhase 'camonet_hull_unhide' == 1 && _target animationSourcePhase 'camofoilage_hull_unhide' == 0";
                        statement = "_target animateSource ['camonet_hull_unhide',0]";
                    };
                    class gme_camofoilage_show {
                        displayName = ECSTRING(core,CamoFoilageShow);
                        radius = 4;
                        condition = "_target animationSourcePhase 'camofoilage_hull_unhide' == 0 && _target animationSourcePhase 'camonet_hull_unhide' == 1";
                        statement = "_target animateSource ['camofoilage_hull_unhide',1]";
                    };
                    class gme_camofoilage_hide: gme_camofoilage_show {
                        displayName = ECSTRING(core,CamoFoilageHide);
                        condition = "_target animationSourcePhase 'camofoilage_hull_unhide' == 1";
                        statement = "_target animateSource ['camofoilage_hull_unhide',0]";
                    };
                };
            };
        };
    };
};
