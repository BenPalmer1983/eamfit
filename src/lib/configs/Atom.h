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
    Atom();
    Atom(std::string label, Vec position);

    void set_mass(double mass);
    void set_position(Vec position);
    void set_label(std::string label);

    double get_mass();
    Vec get_position();
    std::string get_label();
    int get_id();

    void display();

private: 

    double mass {0.0};
    int id{-1};
    Vec position {0.0, 0.0, 0.0};

};




/*****************************************************************************/
#endif