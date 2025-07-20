class cfgVehicles {
	class Tank_F;
	class gm_tracked_base: Tank_F {
		class ACE_Actions;
	};
	class gm_tracked_APC_base: gm_tracked_base {
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions;
		};
	};
	class gm_marder1_base: gm_tracked_APC_base {
		displayName = "SPz Marder 1";
		maximumLoad = 18000;
		ace_refuel_fuelCapacity = 650;
        ace_refuel_canReceive = 1;
        ace_refuel_flowRate = 1;
        fuelCapacity = "650 * 0.165";
        #include "CfgACRE_PRC117_base.hpp"

		class UserActions {
			class gme_hatch_1_1_open {
				displayName = ECSTRING(core,TailgateOpen);
				hideOnUse = 1;
				onlyForPlayer = 0;
				position = "aimpoint";
				radius = 4;
				showWindow = 0;
				condition = "(player in [driver this, this turretUnit [1]]) && (this doorPhase 'hatch_1_1_source' == 0) && (alive this)";
				statement = "this animateDoor ['hatch_1_1_source',1]";
			};
			class gme_hatch_1_1_close {
				displayName = ECSTRING(core,TailgateClose);
				hideOnUse = 1;
				onlyForPlayer = 0;
				position = "aimpoint";
				radius = 4;
				showWindow = 0;
				condition = "(player in [driver this, this turretUnit [1]]) && (this doorPhase 'hatch_1_1_source' == 1) && (alive this)";
				statement = "this animateDoor ['hatch_1_1_source',0]";
			};
			class gme_mirror_down {
				displayName = ECSTRING(core,MirrorDown);
				hideOnUse = 1;
				onlyForPlayer = 0;
				position = "aimpoint";
				radius = 4;
				showWindow = 0;
				condition = "player == driver this and this animationSourcePhase 'mirror_source' < 1";
				statement = "this animateSource ['mirror_source',1]";
			};
			class gme_mirror_up {
				displayName = ECSTRING(core,MirrorUp);
				hideOnUse = 1;
				onlyForPlayer = 0;
				position = "aimpoint";
				radius = 4;
				showWindow = 0;
				condition = "player == driver this and this animationSourcePhase 'mirror_source' > 0";
				statement = "this animateSource ['mirror_source',0]";
			};
		};

		class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                class gme_fuchs_camo {
                    displayName = ECSTRING(core,Camo);
                    radius = 4;
                    condition = "true";
                    statement = "";
                    class gme_camonethull_show {
                        displayName = ECSTRING(core,CamoNetHullShow);
                        radius = 4;
                        condition = "_target animationSourcePhase 'camonet_hull_unhide' == 0";
                        statement = "_target animateSource ['camonet_hull_unhide',1]";
                    };
                    class gme_camonethull_hide: gme_camonethull_show {
                        displayName = ECSTRING(core,CamoNetHullHide);
                        condition = "_target animationSourcePhase 'camonet_hull_unhide' == 1 && _target animationSourcePhase 'camofoilage_hull_unhide' == 0";
                        statement = "_target animateSource ['camonet_hull_unhide',0]";
                    };
					class gme_camonetturret_show {
                        displayName = ECSTRING(core,CamoNetTurretShow);
                        radius = 4;
                        condition = "_target animationSourcePhase 'camonet_MainTurret_trav_unhide' == 0";
                        statement = "_target animateSource ['camonet_MainTurret_trav_unhide',1]";
                    };
                    class gme_camonetturret_hide: gme_camonetturret_show {
                        displayName = ECSTRING(core,CamoNetTurretHide);
                        condition = "_target animationSourcePhase 'camonet_MainTurret_trav_unhide' == 1 && _target animationSourcePhase 'camofoilage_MainTurret_trav_unhide' == 0";
                        statement = "_target animateSource ['camonet_MainTurret_trav_unhide',0]";
                    };
                    class gme_camofoilagehull_show {
                        displayName = ECSTRING(core,CamoFoilageHullShow);
                        radius = 4;
                        condition = "_target animationSourcePhase 'camofoilage_hull_unhide' == 0 && _target animationSourcePhase 'camonet_hull_unhide' == 1";
                        statement = "_target animateSource ['camofoilage_hull_unhide',1]";
                    };
                    class gme_camofoilagehull_hide: gme_camofoilagehull_show {
                        displayName = ECSTRING(core,CamoFoilageHullHide);
                        condition = "_target animationSourcePhase 'camofoilage_hull_unhide' == 1";
                        statement = "_target animateSource ['camofoilage_hull_unhide',0]";
                    };
					class gme_camofoilageturret_show {
                        displayName = ECSTRING(core,CamoFoilageTurretShow);
                        radius = 4;
                        condition = "_target animationSourcePhase 'camofoilage_MainTurret_trav_unhide' == 0 && _target animationSourcePhase 'camonet_MainTurret_trav_unhide' == 1";
                        statement = "_target animateSource ['camofoilage_MainTurret_trav_unhide',1]";
                    };
                    class gme_camofoilageturret_hide: gme_camofoilageturret_show {
                        displayName = ECSTRING(core,CamoFoilageTurretHide);
                        condition = "_target animationSourcePhase 'camofoilage_MainTurret_trav_unhide' == 1";
                        statement = "_target animateSource ['camofoilage_MainTurret_trav_unhide',0]";
                    };
                };
            };
        };
	};
	class gm_marder1a0_base: gm_marder1_base {
		displayName = "SPz Marder 1A0";
	};
	class gm_marder1a1_base: gm_marder1a0_base {
		displayName = "SPz Marder 1A1";
	};
	class gm_marder1a1a_base: gm_marder1a1_base {
		displayName = "SPz Marder 1A1A";
	};
	class gm_marder1a1minus_base: gm_marder1a1_base {
		displayName = "SPz Marder 1A1-";
	};
	class gm_marder1a1plus_base: gm_marder1a1_base {
		displayName = "SPz Marder 1A1+";
	};
	class gm_marder1a2_base: gm_marder1a1_base {
		displayName = "SPz Marder 1A2";
	};
};