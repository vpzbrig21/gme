class cfgVehicles {
	class gm_tracked_APC_base;
	class gm_marder1_base: gm_tracked_APC_base {
		displayName = "SPz Marder 1";
		ace_refuel_fuelCapacity = 650;
        ace_refuel_canReceive = 1;
        ace_refuel_flowRate = 1;
        fuelCapacity = "650 * 0.165";
        #include "CfgACRE_PRC117_base.hpp"

		class UserActions {
			class gme_hatch_1_1_open {
				displayName = ECSTRING(core,TailgateOpen);
				hideOnUse = 1;
				onlyForPlayer = 0;
				position = "aimpoint";
				radius = 4;
				showWindow = 0;
				condition = "(player in [driver this, this turretUnit [1]]) && (this doorPhase 'hatch_1_1_source' == 0) && (alive this)";
				statement = "this animateDoor ['hatch_1_1_source',1]";
			};
			class gme_hatch_1_1_close {
				displayName = ECSTRING(core,TailgateClose);
				hideOnUse = 1;
				onlyForPlayer = 0;
				position = "aimpoint";
				radius = 4;
				showWindow = 0;
				condition = "(player in [driver this, this turretUnit [1]]) && (this doorPhase 'hatch_1_1_source' == 1) && (alive this)";
				statement = "this animateDoor ['hatch_1_1_source',0]";
			};
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
	class gm_marder1a0_base: gm_marder1_base {
		displayName = "SPz Marder 1A0";
	};
	class gm_marder1a1_base: gm_marder1a0_base {
		displayName = "SPz Marder 1A1";
	};
	class gm_marder1a1a_base: gm_marder1a1_base {
		displayName = "SPz Marder 1A1A";
	};
	class gm_marder1a1minus_base: gm_marder1a1_base {
		displayName = "SPz Marder 1A1-";
	};
	class gm_marder1a1plus_base: gm_marder1a1_base {
		displayName = "SPz Marder 1A1+";
	};
	class gm_marder1a2_base: gm_marder1a1_base {
		displayName = "SPz Marder 1A2";
	};
};