#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {QDOUBLES(PREFIX,core)};
        author = AUTHOR;
        authors[] = { AUTHORS };
        authorUrl = "";
        VERSION_CONFIG;
    };
};

class A3A { //global overwrite or inclussion of new navGrids or map info
    #include "mapInfoGlobal.hpp"
    #include "NavGrid.hpp"
};

class CfgMissions
{
    class MPMissions
    {
        class Antistasi_Altis
        {
            briefingName = CSTRING(Altis_mapname);
            directory = QPATHTOFOLDER(Antistasi_Altis.Altis);
        };
        class Antistasi_Other_Altis
        {
            briefingName = CSTRING(Other_Altis_mapname);
            directory = QPATHTOFOLDER(Antistasi_Other_Altis.Altis);
        };
    };
};
