#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"cba_main","ace_main","gm_core","gm_core_vehicles","gm_core_weapons"};
        author = "ingametek";
        url = "https://github.com/vpzbrig21/gme";
        VERSION_CONFIG;
    };
};

#include "CfgMods.inc"
#include "CfgSettings.inc"
#include "CfgVehicleInsignias.inc"
