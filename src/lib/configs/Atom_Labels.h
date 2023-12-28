/******************************************************************************
 * 
 * 
 * 
 * 
******************************************************************************/
#ifndef ATOM_LABELS_H
#define ATOM_LABELS_H
/*****************************************************************************/
#include <iostream>
#include <vector>
#include <string>
#include "core/Stringf.h"
/*****************************************************************************/


class Atom_Labels
{

public:
    static Atom_Labels& get();
    int get_id(std::string label);

private: 

    Atom_Labels() = default;
    ~Atom_Labels() = default;
    Atom_Labels(const Atom_Labels&) = delete;
    Atom_Labels& operator=(const Atom_Labels&) = delete;


    std::vector<std::string> labels {};


};




/*****************************************************************************/
#endif