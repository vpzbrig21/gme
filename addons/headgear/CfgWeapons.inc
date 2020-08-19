class CfgWeapons {
    #define GME_HP_VICCREW ace_hearing_protection = 0.85; ace_hearing_lowerVolume = 0.6;
    #define GME_HP_EARMUFF ace_hearing_protection = 0.75; ace_hearing_lowerVolume = 0.5;
    #define GME_HP_PELTOR ace_hearing_protection = 0.75; ace_hearing_lowerVolume = 0;
    class gm_headgear_unarmored_base;
	class gm_ge_headgear_crewhat_80_base: gm_headgear_unarmored_base {
		GME_HP_VICCREW
	};
	class gm_ge_headgear_beret_crew_base: gm_headgear_unarmored_base {
		GME_HP_PELTOR
	};
	class gm_ge_headgear_headset_crew_base: gm_headgear_unarmored_base {
		GME_HP_PELTOR
	};
    class gm_ge_headgear_sph4_base: gm_headgear_unarmored_base {
        GME_HP_VICCREW
    };

	class gm_gc_headgear_hat_base;
	class gm_gc_headgear_crewhat_80_base: gm_gc_headgear_hat_base {
		GME_HP_VICCREW
	};
    class gm_gc_headgear_fjh_model4_base: gm_headgear_unarmored_base {
        GME_HP_VICCREW
    };
};
