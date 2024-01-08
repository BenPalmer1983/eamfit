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
#include <iomanip>
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
    void set_uid(int uid);

    double get_mass();
    Vec get_position();
    std::string get_label();
    int get_id();
    int get_uid();

    void display();

private: 

    double mass {0.0};
    int id{-1};             // label id
    int uid{-1};            // unique id
    Vec position {0.0, 0.0, 0.0};

};




/*****************************************************************************/
#endif