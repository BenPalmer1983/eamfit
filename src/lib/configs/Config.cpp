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

Atom Config::get_atom(int atom_id) 
{
    if(atom_id < 0 or atom_id >= Config::atoms.size())
    {
        throw std::bad_array_new_length();
    }
    return Config::atoms[atom_id];
}

Vec Config::real_position(Atom atom)
{
    Vec crystal_position = atom.get_position();
    double x = Config::ux.get_x() * crystal_position.get_x() + Config::ux.get_y() * crystal_position.get_y() + Config::ux.get_z() * crystal_position.get_z();
    double y = Config::uy.get_x() * crystal_position.get_x() + Config::uy.get_y() * crystal_position.get_y() + Config::uy.get_z() * crystal_position.get_z();
    double z = Config::uz.get_x() * crystal_position.get_x() + Config::uz.get_y() * crystal_position.get_y() + Config::uz.get_z() * crystal_position.get_z();

    x = Config::get_a0() * x;
    y = Config::get_a0() * y;
    z = Config::get_a0() * z;

    Vec real_position(x, y, z);

    return real_position;
}

Config Config::make_ghost()
{
    Config ghost {};
    ghost.set_a0(Config::get_a0());
    ghost.set_ux(Config::get_ux());
    ghost.set_uy(Config::get_uy());
    ghost.set_uz(Config::get_uz());

    for(int xi=-1; xi<=1; xi++)
    {
        for(int yi=-1; yi<=1; yi++)
        {
            for(int zi=-1; zi<=1; zi++)
            {
                Vec displacement {1.0 * xi, 1.0 * yi, 1.0 * zi};

                for(int i=0; i<Config::atoms.size(); i++)
                {
                    Atom new_atom = Config::atoms[i];
                    Vec position = new_atom.get_position();
                    new_atom.set_position(position + displacement);
                    ghost.add_atom(new_atom);
                    //new_atom.display();
                }
            }
        }
    }

    return ghost;
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