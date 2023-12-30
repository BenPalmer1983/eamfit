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
#include "core/Vec.h"
#include "Atom.h"
/*****************************************************************************/


class Config
{

public:

    // Construct/clear/free
    void clear_atoms();

    // Set
    void set_a0(double a0);
    void set_ux(Vec x);
    void set_uy(Vec y);
    void set_uz(Vec z);

    // Get


    // Calculate


    // Display
    void display();



private:

    // Lattice Constant
    double a0;

    // Unit Vector
    Vec ux {0.0, 0.0, 0.0};
    Vec uy {0.0, 0.0, 0.0};
    Vec uz {0.0, 0.0, 0.0};

    // Atoms
    std::vector<Atom> atoms {};

};




/*****************************************************************************/
#endif