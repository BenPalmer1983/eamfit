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
 
 
    ut.assert(256, fcc.get_atom_count(), "Make_Crystal::make() Config::atom_count()");

    Atom atom {};
    Vec position {};

    atom = fcc.get_atom(0);
    position = atom.get_position();
    
    ut.assert("Al", atom.get_label(), "Make_Crystal::make() Config::get_atom() Atom::get_label()");
    ut.assert(0, atom.get_id(), "Make_Crystal::make() Config::get_atom() Atom::get_id()");
    ut.assert(0.0e0, position.get_x(), 1.0e-8, "Make_Crystal::make() Config::get_atom() Vec::get_x()");
    ut.assert(0.0e0, position.get_y(), 1.0e-8, "Make_Crystal::make() Config::get_atom() Vec::get_y()");
    ut.assert(0.0e0, position.get_z(), 1.0e-8, "Make_Crystal::make() Config::get_atom() Vec::get_z()");

    atom = fcc.get_atom(1);
    position = atom.get_position();

    ut.assert("Ni", atom.get_label(), "Make_Crystal::make() Config::get_atom() Atom::get_label()");
    ut.assert(1, atom.get_id(), "Make_Crystal::make() Config::get_atom() Atom::get_id()");
    ut.assert(0.125e0, position.get_x(), 1.0e-8, "Make_Crystal::make() Config::get_atom() Vec::get_x()");
    ut.assert(0.125e0, position.get_y(), 1.0e-8, "Make_Crystal::make() Config::get_atom() Vec::get_y()");
    ut.assert(0.0e0, position.get_z(), 1.0e-8, "Make_Crystal::make() Config::get_atom() Vec::get_z()");
    
    atom = fcc.get_atom(254);
    position = atom.get_position();

    ut.assert("Al", atom.get_label(), "Make_Crystal::make() Config::get_atom() Atom::get_label()");
    ut.assert(0, atom.get_id(), "Make_Crystal::make() Config::get_atom() Atom::get_id()");
    ut.assert(0.875e0, position.get_x(), 1.0e-8, "Make_Crystal::make() Config::get_atom() Vec::get_x()");
    ut.assert(0.750e0, position.get_y(), 1.0e-8, "Make_Crystal::make() Config::get_atom() Vec::get_y()");
    ut.assert(0.875e0, position.get_z(), 1.0e-8, "Make_Crystal::make() Config::get_atom() Vec::get_z()");

    atom = fcc.get_atom(255);
    position = atom.get_position();

    ut.assert("Ni", atom.get_label(), "Make_Crystal::make() Config::get_atom() Atom::get_label()");
    ut.assert(1, atom.get_id(), "Make_Crystal::make() Config::get_atom() Atom::get_id()");
    ut.assert(0.750e0, position.get_x(), 1.0e-8, "Make_Crystal::make() Config::get_atom() Vec::get_x()");
    ut.assert(0.875e0, position.get_y(), 1.0e-8, "Make_Crystal::make() Config::get_atom() Vec::get_y()");
    ut.assert(0.875e0, position.get_z(), 1.0e-8, "Make_Crystal::make() Config::get_atom() Vec::get_z()");


    // End test
    ut.end();

    return 0;
}



/*****************************************************************************/