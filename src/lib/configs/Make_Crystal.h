/******************************************************************************
 * Make_Crystal
 * Factory (Static)
 * Takes in a configuration and type & number of unit cells
 * and returns configuration
 * 
******************************************************************************/
#ifndef CONFIGS_MAKE_CRYSTAL_H
#define CONFIGS_MAKE_CRYSTAL_H
/*****************************************************************************/
#include <iostream>
#include <string>
#include "core/Stringf.h"
#include "core/Vec.h"
#include "Config.h"
/*****************************************************************************/


class Make_Crystal
{

public:
    static void make(Config & config, std::string crystal_type, std::vector<std::string> labels, int cx, int cy, int cz);


};





    //static void make(Config config, std::string crystal_type, std::vector<std::string> labels, int cx, int cy, int cz);
/*****************************************************************************/
#endif