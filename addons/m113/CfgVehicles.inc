class CfgVehicles {
    class gm_tracked_apc_base;
    class gm_m113_base: gm_tracked_apc_base {
        ace_refuel_fuelCapacity = 360;
        ace_refuel_canReceive = 1;
        ace_refuel_flowRate = 1;
        fuelCapacity = "500 * 0.165";
        class AcreIntercoms {}; //TODO
        class AcreRacks {}; //TODO
    };
};
