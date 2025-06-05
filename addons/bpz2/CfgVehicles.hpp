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
        #include "CfgACRE_PRC117_base.hpp"

		class UserActions {
            class gme_mirror_down {
				displayName = ECSTRING(core,MirrorDown);
				hideOnUse = 1;
				onlyForPlayer = 0;
				position = "aimpoint";
				radius = 4;
				showWindow = 0;
				condition = "player == driver this and this animationSourcePhase 'mirror_source' < 1";
				statement = "this animateSource ['mirror_source',1]";
			};
			class gme_mirror_up {
				displayName = ECSTRING(core,MirrorUp);
				hideOnUse = 1;
				onlyForPlayer = 0;
				position = "aimpoint";
				radius = 4;
				showWindow = 0;
				condition = "player == driver this and this animationSourcePhase 'mirror_source' > 0";
				statement = "this animateSource ['mirror_source',0]";
			};
        };
	};
};