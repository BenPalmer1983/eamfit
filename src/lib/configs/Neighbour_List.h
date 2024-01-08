/******************************************************************************
 * Neighbour_List
 * Factory (Static)
 * Takes in a configuration and computes neighbour list
 * 
 * 
******************************************************************************/
#ifndef CONFIGS_NEIGHBOUR_LIST_H
#define CONFIGS_NEIGHBOUR_LIST_H
/*****************************************************************************/
#include <iostream>
#include <string>
#include <chrono>
#include "core/Stringf.h"
#include "core/Vec.h"
#include "Config.h"
/*****************************************************************************/


class Neighbour_List
{

public:
    void make(Config & config);


private:

    struct pair {
        Atom a;
        Atom b;
        double rd {0.0};
    };


    double rcut {6.5};
    double make_time {0.0};

};





    //static void make(Config config, std::string crystal_type, std::vector<std::string> labels, int cx, int cy, int cz);
/*****************************************************************************/
#endif