#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"cba_main","ace_main","ace_interaction","ace_compat_gm","ace_compat_gm_explosives","ace_compat_gm_refuel","gme_loadorder"};
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
#include "CfgUniformDetails.hpp"