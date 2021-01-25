class CfgVehicles {
    class gm_tracked_Tank_base;
    class gm_leopard1_base: gm_tracked_Tank_base {
        displayName = "KPz Leopard 1";
        ace_refuel_fuelCapacity = 955;
        ace_refuel_canReceive = 1;
        ace_refuel_flowRate = 1;
        fuelCapacity = "530 * 0.165";
        #include "CfgACRE_PRC117_base.inc"
    };
    class gm_Leopard1a0_base: gm_leopard1_base {
        displayName = "KPz Leopard 1A0";
    };
    class gm_Leopard1a1_base: gm_Leopard1a0_base {
        displayName = "KPz Leopard 1A1";
    };
    class gm_Leopard1a1a1_base: gm_Leopard1a1_base {
        displayName = "KPz Leopard 1A1A1";
    };
    class gm_Leopard1a1a2_base: gm_Leopard1a1a1_base {
        displayName = "KPz Leopard 1A1A2";
    };
    class gm_Leopard1a1a3_base: gm_Leopard1a1a1_base {
        displayName = "KPz Leopard 1A1A3";
    };
    class gm_Leopard1a1a4_base: gm_Leopard1a1a2_base {
        displayName = "KPz Leopard 1A1A4";
    };
    class gm_leopard1a1no_base: gm_Leopard1a1_base {
        displayName = "KPz Leopard 1A1NO";
    };
    
    /* Leopard 1A3 family */
    class gm_Leopard1a3_base: gm_Leopard1a0_base {
        displayName = "KPz Leopard 1A3";
    };
    class gm_Leopard1a3a1_base: gm_Leopard1a3_base {
        displayName = "KPz Leopard 1A3A1";
    };
    class gm_Leopard1a3a2_base: gm_Leopard1a3_base {
        displayName = "KPz Leopard 1A3A2";
    };
    class gm_Leopard1a3a3_base: gm_Leopard1a3a1_base {
        displayName = "KPz Leopard 1A3A3";
    };
    class gm_leopard1a3dk_base: gm_Leopard1a3_base {
        displayName = "KPz Leopard 1A3DK";
    };

    /* Leopard 1A4 family */
    class gm_Leopard1a4_base: gm_Leopard1a3_base {
        displayName = "KPz Leopard 1A4";
    };
    class gm_Leopard1a4a1_base: gm_Leopard1a4_base {
        displayName = "KPz Leopard 1A4A1";
    };

    /* Leopard 1A5 family */
    class gm_leopard1a5_base: gm_Leopard1a1a1_base {
        displayName = "KPz Leopard 1A5";
    };
    class gm_Leopard1a5a1_base: gm_leopard1a5_base {
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
