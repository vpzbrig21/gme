class CfgVehicles {
    class gm_wheeled_car_base;
    class gm_iltis_base: gm_wheeled_car_base {
        fuelCapacity = "600 * 0.165";
        ace_refuel_fuelCapacity = 84;
        ace_refuel_canReceive = 1;
        ace_refuel_flowRate = 1;
        #include "CfgACRE_PRC117_base.inc"
    };
};
