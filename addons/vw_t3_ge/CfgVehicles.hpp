class CfgVehicles {
    class gm_typ253_patrol_base;
    class gm_ge_army_typ253_cargo_base: gm_typ253_patrol_base {
        #include "CfgACRE_SEM90_base.hpp"
    };
    class gm_ge_army_typ253_mp_base: gm_typ253_patrol_base {
        #include "CfgACRE_SEM90_base.hpp"
    };
    class gm_ge_bgs_typ253_cargo_base: gm_typ253_patrol_base {
        #include "CfgACRE_SEM90_base.hpp"
    };
    class gm_typ247_patrol_base;
    class gm_typ247_firefighter_base: gm_typ247_patrol_base {};
    class gm_ge_army_typ247_cargo_base: gm_typ247_patrol_base {
        #include "CfgACRE_SEM90_base.hpp"
    };
    class gm_ge_army_typ247_firefighter_base: gm_typ247_firefighter_base {
        #include "CfgACRE_SEM90_base.hpp"
    };
};