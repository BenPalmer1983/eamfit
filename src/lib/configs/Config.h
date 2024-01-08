/******************************************************************************
 * 
 * 
 * 
 * 
******************************************************************************/
#ifndef CONFIG_H
#define CONFIG_H
/*****************************************************************************/
#include <iostream>
#include <vector>
#include <stdexcept>
#include "core/Vec.h"
#include "Atom.h"
/*****************************************************************************/


class Config
{

public:

    // Construct/clear/free
    Config();
    void clear_atoms();

    // Set
    void set_a0(double a0);
    void set_ux(Vec x);
    void set_uy(Vec y);
    void set_uz(Vec z);

    void add_atom(Atom atom);

    // Get
    int get_atom_count();
    double get_a0();
    Vec get_ux();
    Vec get_uy();
    Vec get_uz();
    Atom get_atom(int atom_id);


    // Calculate
    Vec real_position(Atom atom);
    Config make_ghost();

    // Display
    void display();


private:

    // Lattice Constant
    double a0 {1.0};

    // Unit Vector
    Vec ux {1.0, 0.0, 0.0};
    Vec uy {0.0, 1.0, 0.0};
    Vec uz {0.0, 0.0, 1.0};

    // Atoms
    std::vector<Atom> atoms {};

};




/*****************************************************************************/
#endif