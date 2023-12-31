/******************************************************************************
 * 
 * 
 * 
 * 
******************************************************************************/
#include <iostream>
#include <vector>
#include <string>
#include "tester/Unit_Test.h"
#include "configs/Make_Crystal.h"
/*****************************************************************************/


int main()
{

    std::cout << "#############################################" << std::endl;
    std::cout << "     Configs - Make_Crytal - Unit Tests      " << std::endl;
    std::cout << "#############################################" << std::endl;


    Unit_Test ut("configs.Make_Crystal.units");

    Config fcc {};
    std::vector<std::string> al_ni {"Al", "Ni"};

    Make_Crystal::make(fcc, "fcc", al_ni, 4, 4, 4);
 
 
    ut.assert(256, fcc.get_atom_count(), 1.0e-8, "Make_Crystal::make() Config::atom_count()");

    // End test
    ut.end();

    return 0;
}



/*****************************************************************************/