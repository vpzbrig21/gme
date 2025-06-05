class CfgVehicles {
	class gm_tracked_Tank_base;
	class gm_zsu234_base: gm_tracked_Tank_base {
        // displayName = "Fla-SFL 23/4 Shilka";
        // displayNameShort = "Shilka";
		fuelCapacity = "450 * 0.165";
        ace_refuel_fuelCapacity = 521;
		ace_refuel_canReceive = 1;
		ace_refuel_flowRate = 1;
		#include "CfgACRE_PRC117_base.hpp"
	};
};