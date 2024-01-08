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
    std::cout << "     Configs - Config - Unit Tests      " << std::endl;
    std::cout << "#############################################" << std::endl;


    Unit_Test ut("configs.Config.units");

    Config fcc {};
    std::vector<std::string> al_ni {"Al", "Ni"};

    Make_Crystal::make(fcc, "fcc", al_ni, 4, 4, 4);
 
 
    ut.assert(256, fcc.get_atom_count(), "Make_Crystal::make() Config::atom_count()");


    Config fcc_ghost = fcc.make_ghost();
    std::cout << fcc_ghost.get_atom_count() << std::endl;




    // End test
    ut.end();

    return 0;
}



/*****************************************************************************/