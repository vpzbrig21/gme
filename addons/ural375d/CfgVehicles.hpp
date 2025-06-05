class CfgVehicles {
	class gm_wheeled_truck_base;
	class gm_ural375d_base: gm_wheeled_truck_base {
		ace_cargo_space = 12;
		ace_cargo_hasCargo = 1;
		ace_refuel_fuelCapacity = 360;
        ace_refuel_canReceive = 1;
        ace_refuel_flowRate = 1;
        fuelCapacity = "750 * 0.165";
        class AcreIntercoms {};
        class AcreRacks {};
	};
	//class gm_ural375d_medic_base: gm_ural375d_base {};
	class gm_ural375d_refuel_base: gm_ural375d_base {
		ace_refuel_fuelCargo = 5500;
        ace_refuel_hooks[] = {{-0.73443,-3.1749,-0.728138},{0.73443,-3.1749,-0.728138}};
        transportFuel = 0;
	};
};