class CfgVehicles {
	class gm_tracked_Artillery_base;
	class gm_2s1_base: gm_tracked_Artillery_base {
		fuelCapacity = "500 * 0.165";
        ace_refuel_fuelCapacity = 550;
        ace_refuel_canReceive = 1;
        ace_refuel_flowRate = 1;
		#include "CfgACRE_PRC117_base.inc"
	};
};