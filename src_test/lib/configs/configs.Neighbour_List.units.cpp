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
#include "configs/Neighbour_List.h"
/*****************************************************************************/


int main()
{

    std::cout << "#############################################" << std::endl;
    std::cout << "   Configs - Neighbour_List - Unit Tests     " << std::endl;
    std::cout << "#############################################" << std::endl;


    Unit_Test ut("configs.Neighbour_List.units");
    Config fcc {};
    Neighbour_List nl;

    fcc.set_a0(16.16);


    std::vector<std::string> al_ni {"Al", "Ni"};

    Make_Crystal::make(fcc, "fcc", al_ni, 4, 4, 4);
 
 
    ut.assert(256, fcc.get_atom_count(), "Make_Crystal::make() Config::atom_count()");


    Config fcc_ghost = fcc.make_ghost();
    std::cout << fcc_ghost.get_atom_count() << std::endl;


    nl.make(fcc);




    // End test
    ut.end();

    return 0;
}



/*****************************************************************************/