class CfgVehicles {
	class gm_Leopard1_base;
	class gm_Gepard_base: gm_Leopard1_base {
		ace_refuel_fuelCapacity = 985;
        ace_refuel_canReceive = 1;
        ace_refuel_flowRate = 1;
        fuelCapacity = "530 * 0.165";
        #include "CfgACRE_PRC117_base.hpp"
	};
};