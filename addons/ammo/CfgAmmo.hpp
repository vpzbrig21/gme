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

    class gm_shell_artillery_HE_Base;
    class gm_shell_artillery_icm_Base;
    class gm_shell_artillery_Illum_Base;
    class gm_shell_artillery_smoke_Base;
    /* HE - 120mm */
    class gm_shell_120mm_he_dm51: gm_shell_artillery_HE_Base {
        ace_rearm_caliber = 120;
        ace_rearm_dummy = "gm_shell_120mm_he_dm51_static";
    };
    class gm_shell_120mm_he_of843: gm_shell_artillery_HE_Base {
        ace_rearm_caliber = 120;
        ace_rearm_dummy = "gm_shell_120mm_he_of843_static";
    };
    /* SMOKE - 120mm */
    class gm_shell_120mm_smoke_dm25: gm_shell_artillery_smoke_Base {
        ace_rearm_caliber = 120;
        ace_rearm_dummy = "gm_shell_120mm_smoke_dm25_static"; 
    };
    class gm_shell_120mm_smoke_d843: gm_shell_artillery_smoke_Base {
        ace_rearm_caliber = 120;
        ace_rearm_dummy = "gm_shell_120mm_smoke_d843_static"; 
    };
    /* ILLUM - 120mm */
    class gm_shell_120mm_illum_dm26: gm_shell_artillery_Illum_Base {
        ace_rearm_caliber = 120;
        ace_rearm_dummy = "gm_shell_120mm_illum_dm26_static"; 
    };
    class gm_shell_120mm_illum_s843: gm_shell_artillery_Illum_Base {
        ace_rearm_caliber = 120;
        ace_rearm_dummy = "gm_shell_120mm_illum_s843_static"; 
    };
    /* HE AND SMOKE - 155mm */
    class gm_shell_155mm_he_m107: gm_shell_artillery_HE_Base {
        ace_rearm_caliber = 155;
        ace_rearm_dummy = "gm_shell_155mm_he_m107_static"; 
    };
    class gm_shell_155mm_he_m795: gm_shell_artillery_HE_Base {
        ace_rearm_caliber = 155;
        ace_rearm_dummy = "gm_shell_155mm_he_m795_static"; 
    };
    class gm_shell_155mm_he_dm111: gm_shell_155mm_he_m795 {
        ace_rearm_caliber = 155;
        ace_rearm_dummy = "gm_shell_155mm_he_dm111_static"; 
    };
    class gm_shell_155mm_he_dm21: gm_shell_155mm_he_m107 {
        ace_rearm_caliber = 155;
        ace_rearm_dummy = "gm_shell_155mm_he_dm21_static"; 
    };
    class gm_shell_155mm_smoke_dm105: gm_shell_artillery_smoke_Base {
        ace_rearm_caliber = 155;
        ace_rearm_dummy = "gm_shell_155mm_smoke_dm105_static"; 
    };
    class gm_shell_155mm_smoke_m110: gm_shell_artillery_smoke_Base {
        ace_rearm_caliber = 155;
        ace_rearm_dummy = "gm_shell_155mm_smoke_m110_static"; 
    };
    class gm_shell_155mm_smoke_m116: gm_shell_artillery_smoke_Base {
        ace_rearm_caliber = 155;
        ace_rearm_dummy = "gm_shell_155mm_smoke_m116_static"; 
    };
    /* ICM - 155mm */
    class gm_shell_155mm_icm_dm602: gm_shell_artillery_icm_Base {
        ace_rearm_caliber = 155;
        ace_rearm_dummy = "gm_shell_155mm_icm_dm602_static"; 
    };
    /* ILLUM - 155mm */
    class gm_shell_155mm_illum_dm106: gm_shell_artillery_Illum_Base {
        ace_rearm_caliber = 155;
        ace_rearm_dummy = "gm_shell_155mm_illum_dm106_static"; 
    };
    class gm_shell_155mm_illum_m485:  gm_shell_artillery_Illum_Base {
        ace_rearm_caliber = 155;
        ace_rearm_dummy = "gm_shell_155mm_illum_m485_static"; 
    };

    class gm_shell_APDS_Base;
    class gm_shell_APFSDS_Base;
    class gm_shell_HE_Base;
    class gm_shell_HEAT_Base: gm_shell_HE_Base {};
    class gm_shell_HESH_Base: gm_shell_HE_Base {};
    /* 105mm GE */
    class gm_shell_105x617mm_APDS_T_dm13: gm_shell_APDS_Base {
        ace_rearm_caliber = 105;
        ace_rearm_dummy = "gm_shell_105x617mm_apds_t_dm13_static";
    };
    class gm_shell_105x617mm_APFSDS_T_dm23: gm_shell_APFSDS_Base {
        ace_rearm_caliber = 105;
        ace_rearm_dummy = "gm_shell_105x617mm_apfsds_t_dm23_static";
    };
    class gm_shell_105x617mm_APFSDS_T_dm33: gm_shell_APFSDS_Base {
        ace_rearm_caliber = 105;
        ace_rearm_dummy = "gm_shell_105x617mm_apfsds_t_dm33_static";
    };
    class gm_shell_105x617mm_APFSDS_T_dm63: gm_shell_APFSDS_Base {
        ace_rearm_caliber = 105;
        ace_rearm_dummy = "gm_shell_105x617mm_apfsds_t_dm63_static";
    };
    class gm_shell_105x617mm_HEAT_MP_T_dm12: gm_shell_HEAT_Base {
        ace_rearm_caliber = 105;
        ace_rearm_dummy = "gm_shell_105x617mm_heat_mp_t_dm12_static";
    };
    class gm_shell_105x617mm_HESH_T_dm512: gm_shell_HESH_Base {
        ace_rearm_caliber = 105;
        ace_rearm_dummy = "gm_shell_105x617mm_hesh_t_dm512_static";
    };
    /* 100mm GC */
    class gm_shell_100x695mm_APFSDS_T_bm8: gm_shell_APFSDS_Base {
        ace_rearm_caliber = 100;
        ace_rearm_dummy = "gm_shell_100x695mm_apfsds_t_bm8_static";
    };
    class gm_shell_100x695mm_APFSDS_T_bm20: gm_shell_APFSDS_Base {
        ace_rearm_caliber = 100;
        ace_rearm_dummy = "gm_shell_100x695mm_apfsds_t_bm20_static";
    };
    class gm_shell_100x695mm_APFSDS_T_bm25: gm_shell_APFSDS_Base {
        ace_rearm_caliber = 100;
        ace_rearm_dummy = "gm_shell_100x695mm_apfsds_t_bm25_static";
    };
    class gm_shell_100x695mm_APHE_T_br412d: gm_shell_HE_Base {
        ace_rearm_caliber = 100;
        ace_rearm_dummy = "gm_shell_100x695mm_aphe_t_br412d_static";
    };
    class gm_shell_100x695mm_HE_of412: gm_shell_HE_Base {
        ace_rearm_caliber = 100;
        ace_rearm_dummy = "gm_shell_100x695mm_he_of412_static";
    };
    class gm_shell_100x695mm_HEAT_T_bk5m: gm_shell_HEAT_Base {
        ace_rearm_caliber = 100;
        ace_rearm_dummy = "gm_shell_100x695mm_heat_t_bk5m_static";
    };
};