class CfgVehicles {
	class gm_ge_army_fuchsa0_command_base;
	class gm_ge_army_fuchsa0_reconnaissance_base;
	class gm_ge_army_fuchsa0_engineer_base;

	class gm_ge_army_fuchsa0_command_pb21_base: gm_ge_army_fuchsa0_command_base {
		#include "CfgACRE_PRC117F_command.hpp"
	};

	class gm_ge_army_fuchsa0_reconnaissance_pb21_base: gm_ge_army_fuchsa0_reconnaissance_base {
		#include "CfgACRE_PRC117F_base.hpp"
	};
	
	class gm_ge_army_fuchsa0_engineer_pb21_base: gm_ge_army_fuchsa0_engineer_base {
		#include "CfgACRE_PRC117F_base.hpp"
	};
};