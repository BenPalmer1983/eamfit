/******************************************************************************
 * 
 * 
 * 
 * 
******************************************************************************/
#include "Atom.h"
/*****************************************************************************/


Atom::Atom()
{
    
}


Atom::Atom(std::string label, Vec position)
{
    Atom::set_label(label);
    Atom::set_position(position);
    Atom::set_mass(0.0);
}



void Atom::set_label(std::string label)
{
    Atom_Labels & atom_labels = Atom_Labels::get();
    Atom::id = atom_labels.get_id(label);
}

void Atom::set_uid(int uid)
{
    Atom::uid = uid;
}

void Atom::set_position(Vec position)
{
    Atom::position = position;
}

void Atom::set_mass(double mass)
{
    Atom::mass = mass;
}



double Atom::get_mass()
{
    return Atom::mass;
}

Vec Atom::get_position()
{
    return Atom::position;
}

std::string Atom::get_label()
{
    Atom_Labels & atom_labels = Atom_Labels::get();
    return atom_labels.get_label(Atom::id);
}

int Atom::get_id()
{
    return Atom::id;
}


int Atom::get_uid()
{
    return Atom::uid;
}



void Atom::display()
{
    Atom_Labels & atom_labels = Atom_Labels::get();
    int uid = Atom::uid;                // Unique ID
    int id = Atom::id;                  // Label ID
    Vec position = Atom::position;
    std::string label = atom_labels.get_label(id);
    std::cout << std::setprecision(8) << " [" << id << "]" << "  " << position.get_x() << " " << position.get_y() << " " << position.get_z() << std::endl;
}




/*****************************************************************************/