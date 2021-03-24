class CfgAmmo {
	class gm_HandGrenade_base;
	class gm_HandGrenade_prac_base: gm_HandGrenade_base {
		ace_frag_enabled = 0;
		ace_frag_skip = 1;
	};
	class gm_HandGrenade_conc_base: gm_HandGrenade_base {
		ace_frag_enabled = 0;
		ace_frag_skip = 1;
	};

	/* Explosives */
	class PipeBombBase;
    class gm_explosive_petn_charge: PipeBombBase {
        ace_explosives_defuseObjectPosition[] = {0, 0, 0.02};
    };
    class gm_explosive_plnp_charge: PipeBombBase {
        ace_explosives_defuseObjectPosition[] = {0, 0, 0.02};
    };

    class MineBase;
    class gm_mine_at_mn111: MineBase {
        ace_explosives_defuseObjectPosition[] = {0, 0, 0.02};
    };
    class gm_mine_at_dm21: MineBase {
        ace_explosives_defuseObjectPosition[] = {0, 0, 0.02};
    };
    class gm_mine_at_tm46: MineBase {
        ace_explosives_defuseObjectPosition[] = {0, 0, 0.02};
    };

    class APERSMine_Range_Ammo;
    class gm_mine_ap_dm31: APERSMine_Range_Ammo {
        ace_explosives_defuseObjectPosition[] = {0, 0, 0.02};
    };
};