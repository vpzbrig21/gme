class CfgWeapons {
    class gm_pk_base;
	class gm_pkm_base: gm_pk_base {
		ace_overheating_mrbs = 3000;
		ace_overheating_slowdownFactor = 1;
		ace_overheating_allowSwapBarrel = 1;
		ace_overheating_dispersion = 0.25;
	};
	class gm_machineGun_base:
	class gm_mg3_base: gm_machineGun_base {
		ace_overheating_mrbs = 3000;
		ace_overheating_slowdownFactor = 1;
		ace_overheating_allowSwapBarrel = 1;
		ace_overheating_dispersion = 0.25;
	};
	class gm_mg3_veh_base: gm_machineGun_base {
		ace_overheating_allowSwapBarrel = 0;
	};
	class gm_launcher_base;
	class gm_carlgustaf_m2_base: gm_launcher_base {
		ace_reloadlaunchers_enabled = 1;
	};
};