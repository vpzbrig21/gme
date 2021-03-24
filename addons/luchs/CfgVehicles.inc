class CfgVehicles {
    class gm_wheeled_APC_base;
    class gm_luchs_base: gm_wheeled_APC_base {
        displayName = "SpPz Luchs 2";
        ace_refuel_fuelCapacity = 500;
        ace_refuel_canReceive = 1;
        ace_refuel_flowRate = 1;
        fuelCapacity = "720 * 0.165";
        #include "CfgACRE_PRC117_base.inc"
    };
    class gm_luchsa1_base: gm_luchs_base {
        displayName = "SpPz Luchs 2A1";
    };
    class gm_luchsa2_base: gm_luchs_base {
        displayName = "SpPz Luchs 2A2";
    };
};