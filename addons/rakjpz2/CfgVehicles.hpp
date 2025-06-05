class CfgVehicles {
    class gm_tracked_Tank_base;
    class gm_rakjpz2_base: gm_tracked_Tank_base {
        fuelCapacity = "500 * 0.165";
        ace_refuel_fuelCapacity = 600;
        ace_refuel_canReceive = 1;
        ace_refuel_flowRate = 1;
        #include "CfgACRE_PRC117_base.hpp"
    };
};