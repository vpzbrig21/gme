class CfgVehicles {
	class gm_fuchsa0_command_base;
	class gm_ge_army_fuchsa0_command_base: gm_fuchsa0_command_base {
		#include "CfgACRE_SEM90_command.hpp"
	};
	class gm_fuchsa0_reconnaissance_base;
	class gm_ge_army_fuchsa0_reconnaissance_base: gm_fuchsa0_reconnaissance_base {
		#include "CfgACRE_SEM90_base.hpp"
	};
	class gm_fuchsa0_engineer_base;
	class gm_ge_army_fuchsa0_engineer_base: gm_fuchsa0_engineer_base {
		#include "CfgACRE_SEM90_base.hpp"
	};
	class gm_fuchsa0_medic_base;
	class gm_ge_army_fuchsa0_medic_base: gm_fuchsa0_medic_base {
		#include "CfgACRE_SEM90_base.hpp"
	};
};