/******************************************************************************
 * 
 * 
 * 
 * 
******************************************************************************/
#include <iostream>
#include "tester/Unit_Test.h"
#include "core/Vec.h"
#include "configs/Atom.h"
/*****************************************************************************/


int main()
{

    std::cout << "#############################################" << std::endl;
    std::cout << "         Core - Atom - Unit Tests            " << std::endl;
    std::cout << "#############################################" << std::endl;


    Unit_Test ut("configs.Atom.units");

    Vec atom_position {5.0, 1.3, -0.8};
    Atom test_atom {"Al", atom_position};

    ut.assert("Al", test_atom.get_label(), "Atom::get_label()");
    Vec find_position = test_atom.get_position();
    ut.assert(5.0, find_position.get_x(), 1.0e-8, "Atom::get_position() Vec::get_x()");
    ut.assert(1.3, find_position.get_y(), 1.0e-8, "Atom::get_position() Vec::get_y()");
    ut.assert(-0.8, find_position.get_z(), 1.0e-8, "Atom::get_position() Vec::get_z()");




    // End test
    ut.end();

    return 0;
}



/*****************************************************************************/