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
	class gm_explosive_petn_base;
    class gm_explosive_charge_petn: gm_explosive_petn_base  {
        ace_explosives_defuseObjectPosition[] = {0, 0, 0.02};
    };
    class gm_explosive_plnp_base;
    class gm_explosive_charge_plnp: gm_explosive_plnp_base {
        ace_explosives_defuseObjectPosition[] = {0, 0, 0.02};
    };

    class gm_mine_at_base;
    class gm_mine_at_mn111: gm_mine_at_base {
        ace_explosives_defuseObjectPosition[] = {0, 0, 0.02};
    };
    class gm_mine_at_dm21: gm_mine_at_base {
        ace_explosives_defuseObjectPosition[] = {0, 0, 0.02};
    };
    class gm_mine_at_tm46: gm_mine_at_base {
        ace_explosives_defuseObjectPosition[] = {0, 0, 0.02};
    };

    class gm_mine_bounce_base;
    class gm_mine_ap_dm31: gm_mine_bounce_base {
        ace_explosives_defuseObjectPosition[] = {0, 0, 0.02};
    };

    /* HE AND SMOKE - 155mm */
    class gm_shell_artillery_HE_Base;
    class gm_shell_155mm_he_base: gm_shell_artillery_HE_Base {
        ace_rearm_caliber = 155;
        ace_rearm_dummy = "gm_shell_155mm_he_m107_static";
    };
    class gm_shell_155mm_he_m107: gm_shell_155mm_he_base {
        ace_rearm_dummy = "gm_shell_155mm_he_m107_static"; 
    };
    class gm_shell_155mm_he_m795: gm_shell_155mm_he_base {
        ace_rearm_dummy = "gm_shell_155mm_he_m795_static"; 
    };
    class gm_shell_155mm_he_dm111: gm_shell_155mm_he_m795 {
        ace_rearm_dummy = "gm_shell_155mm_he_dm111_static"; 
    };
    class gm_shell_155mm_he_dm21: gm_shell_155mm_he_m107 {
        ace_rearm_dummy = "gm_shell_155mm_he_dm21_static"; 
    };
    class gm_shell_155mm_smoke_base: gm_shell_155mm_he_base {
        ace_rearm_dummy = "gm_shell_155mm_smoke_m110_static"; 
    };
    class gm_shell_155mm_smoke_dm105: gm_shell_155mm_smoke_base {
        ace_rearm_dummy = "gm_shell_155mm_smoke_dm105_static"; 
    };
    class gm_shell_155mm_smoke_m110: gm_shell_155mm_smoke_base {
        ace_rearm_dummy = "gm_shell_155mm_smoke_m110_static"; 
    };
    class gm_shell_155mm_smoke_m116: gm_shell_155mm_smoke_base {
        ace_rearm_dummy = "gm_shell_155mm_smoke_m116_static"; 
    };
    /* ICM */
    class gm_shell_artillery_icm_Base;
    class gm_shell_155mm_icm_base: gm_shell_artillery_icm_Base {
        ace_rearm_caliber = 155;
        ace_rearm_dummy = "gm_shell_155mm_icm_dm602_static";
    };
    class gm_shell_155mm_icm_dm602: gm_shell_155mm_icm_base {
        ace_rearm_dummy = "gm_shell_155mm_icm_dm602_static"; 
    };
    /* ILLUM */
    class gm_shell_artillery_Illum_Base;
    class gm_shell_155mm_Illum_base: gm_shell_artillery_Illum_Base {
        ace_rearm_caliber = 155;
        ace_rearm_dummy = "gm_shell_155mm_illum_m485_static"; 
    };
    class gm_shell_155mm_illum_dm106: gm_shell_155mm_Illum_base {
        ace_rearm_dummy = "gm_shell_155mm_illum_dm106_static"; 
    };
    class gm_shell_155mm_illum_m485:  gm_shell_155mm_Illum_base {
        ace_rearm_dummy = "gm_shell_155mm_illum_m485_static"; 
    };
};