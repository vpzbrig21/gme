class cfgVehicles {
	// EXPLOSIVES
    class Items_base_F;
    class ACE_Explosives_Place: Items_base_F {
        class ACE_Actions {
            class ACE_MainActions;
        };
    };

    // CHARGE
    class ACE_Explosives_Place_gm_explosive_petn: ACE_Explosives_Place {
        displayName = "PETN Charge";
        model = "gm\gm_weapons\gm_put\gm_explosive_charge_petn";
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                position = "[-0.002, 0.022, 0.02]";
            };
        };
    };
    class ACE_Explosives_Place_gm_explosive_plnp: ACE_Explosives_Place {
        displayName = "PLNP Charge";
        model = "gm\gm_weapons\gm_put\gm_explosive_charge_plnp";
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                position = "[-0.002, 0.022, 0.02]";
            };
        };
    };
    // AT MINE
    class ACE_Explosives_Place_gm_mine_tm46: ACE_Explosives_Place {
        displayName = "AT Mine TM46";
        model = "gm\gm_weapons\gm_put\gm_mine_at_tm46";
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                position = "[-0.002, 0.022, 0.02]";
            };
        };
    };
    class ACE_Explosives_Place_gm_explosive_dm21: ACE_Explosives_Place {
        displayName = "AT Mine DM21";
        model = "gm\gm_weapons\gm_put\gm_mine_at_dm21";
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                position = "[-0.002, 0.022, 0.02]";
            };
        };
    };
    class ACE_Explosives_Place_gm_explosive_m111: ACE_Explosives_Place {
        displayName = "MN 111";
        model = "gm\gm_weapons\gm_launchers\gm_platan\gm_mine_at_mn111_disarmed";
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                position = "[-0.002, 0.022, 0.02]";
            };
        };
    };
    // AP
    class ACE_Explosives_Place_gm_explosive_dm31: ACE_Explosives_Place {
        displayName = "AP Mine DM31";
        model = "gm\gm_weapons\gm_put\gm_mine_ap_dm31";
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                position = "[-0.002, 0.022, 0.02]";
            };
        };
    };

    // Ammoboxes ACE
    class ReammoBox_F;
    class gm_AmmoBox_base: ReammoBox_F {
        ace_cargo_canLoad = 1;
        ace_cargo_size = 1;
        ace_dragging_canCarry = 1;
        ace_dragging_canDrag = 1;
    };
    class gm_ammobox_wood_155mm_base: gm_AmmoBox_base {
        ace_cargo_canLoad = 1;
        ace_cargo_size = 2;
        ace_dragging_canCarry = 1;
        ace_dragging_canDrag = 1;
        ace_rearm_defaultSupply = 8000;
        transportAmmo = 0;
    };
};