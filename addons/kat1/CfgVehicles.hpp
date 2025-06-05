class CfgVehicles {
    class gm_wheeled_truck_base;
    class gm_kat1_base: gm_wheeled_truck_base {
        fuelCapacity = "500 * 0.165";
        ace_refuel_fuelCapacity = 275;
        ace_refuel_canReceive = 1;
        ace_refuel_flowRate = 1;
        class AcreIntercoms {};
        class AcreRacks {};
    };
    class gm_kat1_451_base: gm_kat1_base {
        ace_cargo_hasCargo = 1;
        ace_cargo_space = 16;
    };
    class gm_kat1_451_reammo_base: gm_kat1_451_base {
        ace_rearm_defaultSupply = 12000;
        transportAmmo = 0;
        ace_cargo_space = 4;
    };
    class gm_kat1_451_refuel_base: gm_kat1_451_base {
        ace_refuel_fuelCargo = 4600;
        ace_refuel_hooks[] = {{-0.60,-3.44,-0.919689},{0.60,-3.44,-0.919689}};
        transportFuel = 0;
        ace_cargo_space = 4;
    };
    class gm_kat1_452_base: gm_kat1_base {
        fuelCapacity = "450 * 0.165";
        ace_refuel_fuelCapacity = 292;
        ace_cargo_hasCargo = 1;
        ace_cargo_space = 24;
    };
    class gm_kat1_454_base: gm_kat1_base {
        fuelCapacity = "415 * 0.165";
        ace_refuel_fuelCapacity = 170;
    };
    class gm_kat1_454_cargo_base: gm_kat1_454_base {
        ace_cargo_hasCargo = 1;
        ace_cargo_space = 32;
    };
    class gm_kat1_454_reammo_base: gm_kat1_454_cargo_base {
        ace_rearm_defaultSupply = 18000;
        transportAmmo = 0;
        ace_cargo_space = 4;
    };
};
