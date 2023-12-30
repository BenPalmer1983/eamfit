/******************************************************************************
 * Make_Crystal
 * Factory (Static)
 * Takes in a configuration and type & number of unit cells
 * and returns configuration
 * 
******************************************************************************/
#ifndef MAKE_CRYSTAL_H
#define MAKE_CRYSTAL_H
/*****************************************************************************/
#include <iostream>
#include <string>
#include "Config.h"
#include "core/Stringf.h"
/*****************************************************************************/


class Make_Crystal
{

public:
    Config make(Config config, std::string crystal_type, std::vector<std::string> labels, int cx, int cy, int cz);


};




/*****************************************************************************/
#endif