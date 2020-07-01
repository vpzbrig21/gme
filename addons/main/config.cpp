#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"cba_main","ace_main","acre_main"};
        author = "ingametek";
        url = "https://github.com/vpzbrig21/gme";
        VERSION_CONFIG;
    };
};

#include "cfgMods.hpp"