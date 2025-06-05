class CfgVehicles {
    class gm_rakjpz2_base;
    class gm_ge_army_rakjpz2_base: gm_rakjpz2_base {
        fuelCapacity = "500 * 0.165";
        ace_refuel_fuelCapacity = 600;
        ace_refuel_canReceive = 1;
        ace_refuel_flowRate = 1;
        #include "CfgACRE_SEM90_base.hpp"
    };
};