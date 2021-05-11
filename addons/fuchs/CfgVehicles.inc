class CfgVehicles {
    class gm_wheeled_APC_base;
    class gm_fuchs_base: gm_wheeled_APC_base {
        fuelCapacity = "780 * 0.165";
        ace_refuel_fuelCapacity = 390;
		ace_refuel_canReceive = 1;
		ace_refuel_flowRate = 1;
        #include "CfgACRE_PRC117_base.inc"
    };
    class gm_fuchsa0_base;
    class gm_fuchsa0_command_base: gm_fuchsa0_base {
        #include "CfgACRE_PRC117_command.inc"
    };
    class gm_fuchsa0_reconnaissance_base: gm_fuchsa0_base {
        #include "CfgACRE_PRC117_base.inc"
    };
    class gm_fuchsa0_engineer_base: gm_fuchsa0_base {
        #include "CfgACRE_PRC117_base.inc"
    };
};
