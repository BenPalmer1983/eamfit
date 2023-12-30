/******************************************************************************
 * 
 * 
 * 
 * 
******************************************************************************/
#include "Atom.h"
/*****************************************************************************/


void Atom::set_label(std::string label)
{
    Atom_Labels & atom_labels = Atom_Labels::get();
    Atom::id = atom_labels.get_id("Al");
}

void Atom::set_position(Vec position)
{
    Atom::position = position;
}

void Atom::set_mass(double mass)
{
    Atom::mass = mass;
}




void Atom::display()
{
    Atom_Labels & atom_labels = Atom_Labels::get();
    int id = Atom::id;
    std::string label = atom_labels.get_label(id);
    std::cout << label << " [" << id << "]" << std::endl;
}




/*****************************************************************************/