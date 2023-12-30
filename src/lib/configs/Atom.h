/******************************************************************************
 * 
 * 
 * 
 * 
******************************************************************************/
#ifndef ATOM_H
#define ATOM_H
/*****************************************************************************/
#include <iostream>
#include "core/Vec.h"
#include "Atom_Labels.h"
/*****************************************************************************/


class Atom
{

public:
    void set_mass(double mass);
    void set_position(Vec position);
    void set_label(std::string label);

    void display();

private: 

    double mass {0.0};
    int id{-1};
    Vec position {0.0, 0.0, 0.0};

};




/*****************************************************************************/
#endif