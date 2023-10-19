class CfgVehicles {
    class gm_tracked_Tank_base;
    class gm_leopard1_base: gm_tracked_Tank_base {
        displayName = "KPz Leopard 1";
        ace_refuel_fuelCapacity = 955;
        ace_refuel_canReceive = 1;
        ace_refuel_flowRate = 1;
        fuelCapacity = "530 * 0.165";
        #include "CfgACRE_PRC117_base.hpp"

        class UserActions {
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
    };
    class gm_leopard1a0_base: gm_leopard1_base {
        displayName = "KPz Leopard 1A0";
    };
    class gm_leopard1a1_base: gm_leopard1a0_base {
        displayName = "KPz Leopard 1A1";
    };
    class gm_leopard1a1a1_base: gm_leopard1a1_base {
        displayName = "KPz Leopard 1A1A1";
    };
    class gm_leopard1a1a2_base: gm_leopard1a1a1_base {
        displayName = "KPz Leopard 1A1A2";
    };
    class gm_leopard1a1a3_base: gm_leopard1a1a1_base {
        displayName = "KPz Leopard 1A1A3";
    };
    class gm_leopard1a1a4_base: gm_leopard1a1a2_base {
        displayName = "KPz Leopard 1A1A4";
    };
    class gm_leopard1a1no_base: gm_leopard1a1_base {
        displayName = "KPz Leopard 1A1NO";
    };
    
    /* Leopard 1A3 family */
    class gm_leopard1a3_base: gm_leopard1a0_base {
        displayName = "KPz Leopard 1A3";
    };
    class gm_leopard1a3a1_base: gm_leopard1a3_base {
        displayName = "KPz Leopard 1A3A1";
    };
    class gm_leopard1a3a2_base: gm_leopard1a3_base {
        displayName = "KPz Leopard 1A3A2";
    };
    class gm_leopard1a3a3_base: gm_leopard1a3a1_base {
        displayName = "KPz Leopard 1A3A3";
    };
    class gm_leopard1a3dk_base: gm_leopard1a3_base {
        displayName = "KPz Leopard 1A3DK";
    };

    /* Leopard 1A4 family */
    class gm_leopard1a4_base: gm_leopard1a3_base {
        displayName = "KPz Leopard 1A4";
    };
    class gm_leopard1a4a1_base: gm_leopard1a4_base {
        displayName = "KPz Leopard 1A4A1";
    };

    /* Leopard 1A5 family */
    class gm_leopard1a5_base: gm_leopard1a1a1_base {
        displayName = "KPz Leopard 1A5";
    };
    class gm_leopard1a5a1_base: gm_leopard1a5_base {
        displayName = "KPz Leopard 1A5A1";
    };
    class gm_leopard1a5dk_base: gm_leopard1a5_base {
        displayName = "KPz Leopard 1A5DK";
    };
    class gm_leopard1a5dk1_base: gm_leopard1a5_base {
        displayName = "KPz Leopard 1A5DK1";
    };
    class gm_leopard1a5no_base: gm_leopard1a5_base {
        displayName = "KPz Leopard 1A5NO";
    };
    class gm_leopard1a5no2_base: gm_leopard1a5_base {
        displayName = "KPz Leopard 1A5NO2";
    };

};
