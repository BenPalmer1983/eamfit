/******************************************************************************
 * 
 * 
 * 
 * 
 * 
******************************************************************************/
#include "Make_Crystal.h"
/*****************************************************************************/

void Make_Crystal::make(Config & config, std::string crystal_type_in, std::vector<std::string> labels_in, int cx, int cy, int cz)
{
    std::string crystal_type = Stringf::upper(crystal_type_in);


    std::vector<Vec> positions {};  

    if(crystal_type == "FCC")
    {       
        Vec atom_a {0.0, 0.0, 0.0};
        Vec atom_b {0.5, 0.5, 0.0};
        Vec atom_c {0.5, 0.0, 0.5};
        Vec atom_d {0.0, 0.5, 0.5};
        positions.push_back(atom_a);
        positions.push_back(atom_b);
        positions.push_back(atom_c);
        positions.push_back(atom_d);
    }
    else if(crystal_type == "BCC")
    {  
        Vec atom_a {0.0, 0.0, 0.0};
        Vec atom_b {0.5, 0.5, 0.5};
        positions.push_back(atom_a);
        positions.push_back(atom_b);
    }
    
    int uid = 0;
    for(int i=0; i<cx; i++)
    {
        for(int j=0; j<cy; j++)
        {
            for(int k=0; k<cz; k++)
            {
                for(int n=0; n<positions.size(); n++)
                {
                    std::string label = labels_in[n % labels_in.size()];
                    Vec atom_position = positions[n];
                    double x = (i + atom_position.get_x()) / cx;
                    double y = (j + atom_position.get_y()) / cy;
                    double z = (k + atom_position.get_z()) / cz;
                    atom_position.set_x(x);
                    atom_position.set_y(y);
                    atom_position.set_z(z);
                    Atom new_atom {label, atom_position};   // Label and position
                    new_atom.set_uid(uid);              // Give atom a unique ID
                    config.add_atom(new_atom);

                    uid = uid + 1;
                }
            }        
        } 
    }
    
}


/*****************************************************************************/