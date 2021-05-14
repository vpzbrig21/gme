class CfgVehicles {
    class gm_wheeled_APC_base;
    class gm_luchs_base: gm_wheeled_APC_base {
        displayName = "SpPz Luchs 2";
        ace_refuel_fuelCapacity = 500;
        ace_refuel_canReceive = 1;
        ace_refuel_flowRate = 1;
        fuelCapacity = "720 * 0.165";
        #include "CfgACRE_PRC117_base.inc"

        class UserActions {
            class gme_mirror_down {
				displayName = "Spiegel runter";
				hideOnUse = 1;
				onlyForPlayer = 0;
				position = "aimpoint";
				radius = 4;
				showWindow = 0;
				condition = "player == driver this and this animationSourcePhase 'mirror_source' < 1";
				statement = "this animateSource ['mirror_source',1]";
			};
			class gme_mirror_up {
				displayName = "Spiegel hoch";
				hideOnUse = 1;
				onlyForPlayer = 0;
				position = "aimpoint";
				radius = 4;
				showWindow = 0;
				condition = "player == driver this and this animationSourcePhase 'mirror_source' > 0";
				statement = "this animateSource ['mirror_source',0]";
			};
        };
    };
    class gm_luchsa1_base: gm_luchs_base {
        displayName = "SpPz Luchs 2A1";
    };
    class gm_luchsa2_base: gm_luchs_base {
        displayName = "SpPz Luchs 2A2";
    };
};