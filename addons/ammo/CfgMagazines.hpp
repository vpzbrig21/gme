class CfgMagazines {
	/* MG3 */
	class gm_120rnd_762x51mm_mg3_grn;
	class gm_120Rnd_762x51mm_B_T_DM21_mg3_grn: gm_120rnd_762x51mm_mg3_grn {
		ACE_isBelt = 1;
	};
	class gm_120Rnd_762x51mm_B_T_DM21A1_mg3_grn: gm_120rnd_762x51mm_mg3_grn {
		ACE_isBelt = 1;
	};
	class gm_120Rnd_762x51mm_B_T_DM21A2_mg3_grn: gm_120rnd_762x51mm_mg3_grn {
		ACE_isBelt = 1;
	};
	/* PK */
	class gm_100rnd_762x54mm_pk_grn;
	class gm_100Rnd_762x54mm_API_b32_pk_grn: gm_100rnd_762x54mm_pk_grn {
		ACE_isBelt = 1;
	};
	class gm_100Rnd_762x54mm_B_T_t46_pk_grn: gm_100rnd_762x54mm_pk_grn {
		ACE_isBelt = 1;
	};
	class gm_100rnd_762x54mmR_pk_grn;
	class gm_100Rnd_762x54mmR_API_7bz3_pk_grn: gm_100rnd_762x54mmR_pk_grn {
		ACE_isBelt = 1;
	};
	class gm_100Rnd_762x54mmR_B_T_7t2_pk_grn: gm_100rnd_762x54mmR_pk_grn {
		ACE_isBelt = 1;
	};

	/* Explosives */
	class gm_explosive_petn_charge_base;
    class gm_explosive_petn_charge: gm_explosive_petn_charge_base {
        ace_explosives_DelayTime = 1;
        ace_explosives_Placeable = 1;
        ace_explosives_SetupObject = "ACE_Explosives_Place_gm_explosive_petn";
        useAction = 0;
        class ACE_Triggers {
            SupportedTriggers[] = {"Timer", "Command", "MK16_Transmitter", "DeadmanSwitch"};
            class Timer {
                FuseTime = 0.5;
            };
            class Command {
                FuseTime = 0.5;
            };
            class MK16_Transmitter: Command {};
            class DeadmanSwitch: Command {};
        };
    };

    class gm_explosive_plnp_charge_base;
    class gm_explosive_plnp_charge: gm_explosive_plnp_charge_base {
        ace_explosives_DelayTime = 1;
        ace_explosives_Placeable = 1;
        ace_explosives_SetupObject = "ACE_Explosives_Place_gm_explosive_plnp";
        useAction = 0;
        class ACE_Triggers {
            SupportedTriggers[] = {"Timer", "Command", "MK16_Transmitter", "DeadmanSwitch"};
            class Timer {
                FuseTime = 0.5;
            };
            class Command {
                FuseTime = 0.5;
            };
            class MK16_Transmitter: Command {};
            class DeadmanSwitch: Command {};
        };
    };

    class gm_mine_at_base;
    class gm_mine_at_tm46: gm_mine_at_base {
        ace_explosives_Placeable = 1;
        ace_explosives_SetupObject = "ACE_Explosives_Place_gm_mine_tm46";
        useAction = 0;
        class ACE_Triggers {
            SupportedTriggers[] = {"PressurePlate"};
            class PressurePlate {
                digDistance = 0.03;
            };
        };
    };
    class gm_mine_at_dm21: gm_mine_at_base {
        ace_explosives_Placeable = 1;
        ace_explosives_SetupObject = "ACE_Explosives_Place_gm_explosive_dm21";
        useAction = 0;
        class ACE_Triggers {
            SupportedTriggers[] = {"PressurePlate"};
            class PressurePlate {
                digDistance = 0.03;
            };
        };
    };
    class gm_mine_at_mn111: gm_mine_at_base {
        ace_explosives_Placeable = 1;
        ace_explosives_SetupObject = "ACE_Explosives_Place_gm_explosive_m111";
        useAction = 0;
        class ACE_Triggers {
            SupportedTriggers[] = {"PressurePlate"};
            class PressurePlate {
                digDistance = 0.03;
            };
        };
    };

    // class ATMine_Range_Mag;
    class gm_mine_ap_dm31: gm_mine_at_base {
        ace_explosives_Placeable = 1;
        ace_explosives_SetupObject = "ACE_Explosives_Place_gm_explosive_dm31";
        useAction = 0;
        class ACE_Triggers {
            SupportedTriggers[] = {"Tripwire"};
            class Tripwire {
                digDistance = 0.125;
            };
        };
    };

    // Vehicle Magazines
    class gm_magazine_20x139mm_base;
    class gme_320Rnd_20x139mm_hei_t_dm81: gm_magazine_20x139mm_base {
        displayName = "20 mm 320Rnd HEI-T DM81";
        descriptionShort = "Caliber: 20x139 mm HEI-T DM81<br />Rounds: 320<br />Used in: RH202";
        displaynameshort = "HEI-T";
        ammo = "gm_bullet_20x139mm_hei_t_dm81";
        count = 320;
        initSpeed = 1175;
        tracersEvery = 1;
        lastRoundsTracer = 1;
        scope = 1;
        scopeCurator = 2;
        author = "Global Mobilization";
    };
    class gme_400Rnd_20x139mm_hei_t_dm81: gm_magazine_20x139mm_base {
        displayName = "20 mm 400Rnd HEI-T DM81";
        descriptionShort = "Caliber: 20x139 mm HEI-T DM81<br />Rounds: 400<br />Used in: RH202";
        displaynameshort = "HEI-T";
        ammo = "gm_bullet_20x139mm_hei_t_dm81";
        count = 400;
        initSpeed = 1175;
        tracersEvery = 1;
        lastRoundsTracer = 1;
        scope = 1;
        scopeCurator = 2;
        author = "Global Mobilization";
    };
    class gme_180Rnd_20x139mm_apds_t_dm63: gm_magazine_20x139mm_base {
        displayName = "20 mm 180Rnd APDS-T DM63";
        descriptionShort = "Caliber: 20x139 mm APDS-T DM63<br />Rounds: 180<br />Used in: RH202";
        displaynameshort = "APDS-T";
        ammo = "gm_bullet_20x139mm_apds_t_dm63";
        count = 180;
        initSpeed = 1175;
        tracersEvery = 1;
        lastRoundsTracer = 1;
        scope = 1;
        scopeCurator = 2;
        author = "Global Mobilization";
    };
    class gme_100Rnd_20x139mm_apds_t_dm63: gm_magazine_20x139mm_base {
        displayName = "20 mm 100Rnd APDS-T DM63";
        descriptionShort = "Caliber: 20x139 mm APDS-T DM63<br />Rounds: 100<br />Used in: RH202";
        displaynameshort = "APDS-T";
        ammo = "gm_bullet_20x139mm_apds_t_dm63";
        count = 100;
        initSpeed = 1175;
        tracersEvery = 1;
        lastRoundsTracer = 1;
        scope = 1;
        scopeCurator = 2;
        author = "Global Mobilization";
    };
    // Steel Beast Pro
    class gme_330Rnd_20x139mm_hei_t_dm81: gm_magazine_20x139mm_base {
        displayName = "20 mm 330Rnd HEI-T DM81";
        descriptionShort = "Caliber: 20x139 mm HEI-T DM81<br />Rounds: 330<br />Used in: RH202 based on SBPro";
        displaynameshort = "HEI-T";
        ammo = "gm_bullet_20x139mm_hei_t_dm81";
        count = 330;
        initSpeed = 1175;
        tracersEvery = 1;
        lastRoundsTracer = 1;
        scope = 1;
        scopeCurator = 2;
    };
    class gme_170Rnd_20x139mm_apds_t_dm63: gm_magazine_20x139mm_base {
        displayName = "20 mm 170Rnd APDS-T DM63";
        descriptionShort = "Caliber: 20x139 mm APDS-T DM63<br />Rounds: 100<br />Used in: RH202 based on SBPro";
        displaynameshort = "APDS-T";
        ammo = "gm_bullet_20x139mm_apds_t_dm63";
        count = 170;
        initSpeed = 1175;
        tracersEvery = 1;
        lastRoundsTracer = 1;
        scope = 1;
        scopeCurator = 2;
        author = "Global Mobilization";
    };
};