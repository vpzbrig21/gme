#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"cba_main","ace_main","ace_compat_gm","ace_compat_gm_explosives","ace_compat_gm_refuel","gm_core","gm_core_vehicles","gm_core_weapons"};
        skipWhenMissingDependencies = 1;
        author = "ingametek";
        url = "https://github.com/vpzbrig21/gme";
        VERSION_CONFIG;
    };
};

#include "CfgMods.hpp"
#include "CfgSettings.hpp"
#include "CfgCategroies.hpp"
#include "CfgVehicleInsignias.hpp"
