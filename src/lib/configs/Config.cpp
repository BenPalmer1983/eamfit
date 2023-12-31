/******************************************************************************
 * 
 * 
 * 
 * 
******************************************************************************/
#include "Config.h"
/*****************************************************************************/


// Contructors
//#######################################


Config::Config()
{
    Config::clear_atoms();
}

void Config::clear_atoms()
{
    Config::atoms.clear();
}


// Setters
//#######################################

void Config::set_a0(double a0)
{
    Config::a0 = a0;
}

void Config::set_ux(Vec x)
{
    Config::ux = x;
}

void Config::set_uy(Vec y)
{
    Config::uy = y;
}

void Config::set_uz(Vec z) 
{
    Config::uz = z;
}


void Config::add_atom(Atom atom) 
{
    Config::atoms.push_back(atom);
}




// Getters
//#######################################

int Config::get_atom_count() 
{
    return Config::atoms.size();
}

double Config::get_a0() 
{
    return Config::a0;
}

Vec Config::get_ux() 
{
    return Config::ux;
}

Vec Config::get_uy() 
{
    return Config::uy;
}

Vec Config::get_uz() 
{
    return Config::uz;
}





// Display
//#######################################

void Config::display()
{
    std::cout << "Atom count: " << Config::atoms.size() << std::endl;
    for(int i=0; i<Config::atoms.size(); i++)
    {
        Config::atoms[i].display();
    }
}



/*****************************************************************************/