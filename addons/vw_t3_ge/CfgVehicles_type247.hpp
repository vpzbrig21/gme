class gm_typ247_patrol_base;
class gm_typ247_firefighter_base: gm_typ247_patrol_base {};
class gm_ge_army_typ247_cargo_base: gm_typ247_patrol_base {
    #include "CfgACRE_SM90_base.hpp"
};
class gm_ge_army_typ247_firefighter_base: gm_typ247_firefighter_base {
    #include "CfgACRE_SM90_base.hpp"
};