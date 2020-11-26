class CfgVehicles {
    class gm_wheeled_truck_base;
    class gm_u1300l_base: gm_wheeled_truck_base {
        fuelCapacity = "760 * 0.165";
        ace_refuel_fuelCapacity = 160;
		ace_refuel_canReceive = 1;
		ace_refuel_flowRate = 1;
        class AcreIntercoms {};
        class AcreRacks {};
    };
    class gm_u1300l_repair_base: gm_u1300l_base {
        ace_repair_canRepair = 1;
        transportRepair = 0;
    };
};
