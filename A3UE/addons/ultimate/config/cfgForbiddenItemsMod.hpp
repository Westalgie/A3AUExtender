class mod_unlimited_base : forbidden_unlimited_base 
{
    addons[] = {"Required CfgPatches entry(s)"};
};

class mod_limited_base : forbidden_limited_base 
{
    addons[] = {"Required CfgPatches entry(s)"};
};

// Can be weapon, magazine, vest, etc. Basically anything that can either go in the arsenal or a crate

class Equipment_Classname : mod_unlimited_base {}; // Will not appear in crates, but can be unlimited in the arsenal

class Equipment_Classname_2 : mod_limited_base {}; // Will not appear in crates, and can't be unlimited in the arsenal
