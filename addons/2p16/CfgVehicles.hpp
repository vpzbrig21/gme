class CfgVehicles {
	class gm_tracked_Artillery_base;
	class gm_2p16_base: gm_tracked_Artillery_base {
		fuelCapacity = "200 * 0.165";
        ace_refuel_fuelCapacity = 250;
        ace_refuel_canReceive = 1;
        ace_refuel_flowRate = 1;
		#include "CfgACRE_PRC117_base.hpp"
	};
};