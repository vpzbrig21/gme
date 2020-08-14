class CfgVehicles {
    class gm_wheeled_truck_base;
    class gm_kat1_base: gm_wheeled_truck_base {
        ace_refuel_fuelCapacity = 270;
        ace_refuel_canReceive = 1;
        ace_refuel_flowRate = 1;
        fuelCapacity = "540 * 0.165";
        class AcreIntercoms {};
        class AcreRacks {};
    };
    class gm_kat1_451_base: gm_kat1_base {};
    class gm_kat1_451_reammo_base: gm_kat1_451_base {
        ace_rearm_defaultSupply = 1200;
        transportAmmo = 0;
    };
    class gm_kat1_451_refuel_base: gm_kat1_451_base {
        ace_refuel_fuelCargo = 4600;
        ace_refuel_hooks[] = {{-0.60,-3.44,-0.919689},{0.60,-3.44,-0.919689}};
        transportFuel = 0;
    };
};
