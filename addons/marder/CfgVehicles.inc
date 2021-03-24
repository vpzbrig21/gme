class cfgVehicles {
	class gm_tracked_APC_base;
	class gm_marder1_base: gm_tracked_APC_base {
		displayName = "SPz Marder 1";
		ace_refuel_fuelCapacity = 650;
        ace_refuel_canReceive = 1;
        ace_refuel_flowRate = 1;
        fuelCapacity = "650 * 0.165";
        #include "CfgACRE_PRC117_base.inc"
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