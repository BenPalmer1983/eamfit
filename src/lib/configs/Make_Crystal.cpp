/******************************************************************************
 * 
 * 
 * 
 * 
 * 
******************************************************************************/
#include "Make_Crystal.h"
/*****************************************************************************/

Config Make_Crystal::make(Config config, std::string crystal_type_in, std::vector<std::string> labels_in, int cx, int cy, int cz)
{
    crystal_type = Stringf::upper(crystal_type_in);
    std::vector<Vec> positions;


    if(crystal_type == "FCC")
    {
        positions.push_back({0.0, 0.0, 0.0});
        positions.push_back({0.5, 0.5, 0.0});
        positions.push_back({0.5, 0.0, 0.5});
        positions.push_back({0.0, 0.5, 0.5});
    }
    else if(crystal_type == "BCC")
    {
        positions.push_back({0.0, 0.0, 0.0});
        positions.push_back({0.5, 0.5, 0.5});
    }


}


/*****************************************************************************/