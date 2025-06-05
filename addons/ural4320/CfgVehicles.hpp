class CfgVehicles {
	class gm_wheeled_truck_base;
	class gm_ural4320_base: gm_wheeled_truck_base {
		ace_cargo_space = 8;
		ace_cargo_hasCargo = 1;
		ace_refuel_fuelCapacity = 300;
        ace_refuel_canReceive = 1;
        ace_refuel_flowRate = 1;
        fuelCapacity = "860 * 0.165";
        class AcreIntercoms {};
        class AcreRacks {};
	};
	class gm_ural4320_cargo_base: gm_ural4320_base {
		ace_cargo_space = 16;
		ace_cargo_hasCargo = 1;
	};
	class gm_ural4320_reammo_base: gm_ural4320_base {
		ace_rearm_defaultSupply = 1200;
        transportAmmo = 0;
	};
	class gm_ural4320_repair_base: gm_ural4320_base {
		ace_repair_canRepair = 1;
        transportRepair = 0;
	};
	//class gm_ural44202_base: gm_ural4320_base {};
};