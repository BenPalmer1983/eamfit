/******************************************************************************
 * 
 * 
 * 
 * 
******************************************************************************/
#include "Config.h"
/*****************************************************************************/


void Config::clear_atoms()
{
    Config::atoms.clear();
}



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



void Config::display()
{
    std::cout << "Atom count: " << Config::atoms.size() << std::endl;
    for(int i=0; i<Config::atoms.size(); i++)
    {
        Config::atoms[i].display();
    }
}



/*****************************************************************************/