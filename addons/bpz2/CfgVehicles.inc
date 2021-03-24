class CfgVehicles {
	class gm_Leopard1_base;
	class gm_BPz2_base: gm_Leopard1_base {
        fuelCapacity = "840 * 0.165";
		ace_refuel_fuelCapacity = 1550;
        ace_refuel_canReceive = 1;
        ace_refuel_flowRate = 1;
		ace_cargo_hasCargo = 1;
		ace_cargo_space = 12;
        ace_repair_canRepair = 1;
        transportRepair = 0;
        #include "CfgACRE_PRC117_base.inc"
	};
};