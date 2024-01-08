/******************************************************************************
 * 
 * 
 * 
 * 
 * 
******************************************************************************/
#include "Neighbour_List.h"
/*****************************************************************************/

void Neighbour_List::make(Config & config)
{
    // start timer
    auto start = std::chrono::high_resolution_clock::now();

    // make ghost config
    Config ghost_config = config.make_ghost();
    double rcut = Neighbour_List::rcut;

    // find pairs in range
    int m = 0;
    for(int i=0; i<config.get_atom_count(); i++)
    {
        for(int j=0; j<ghost_config.get_atom_count(); j++)
        {
            Atom a = config.get_atom(i);
            Atom b = ghost_config.get_atom(j);

            if(a.get_uid() < b.get_uid())
            {

                Vec a_pos = config.real_position(a);
                Vec b_pos = ghost_config.real_position(b);

                if(a_pos.within_range(b_pos, rcut))
                {
                    m = m + 1;
                }
            }

        }
    }

    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    //std::chrono::duration_cast<std::chrono::duration<float, std::chrono::microseconds>>(duration.count()) * 1.0e-6;
    double make_time = std::chrono::duration_cast<std::chrono::duration<double>>(duration).count();
    std::cout << m << " " << make_time << std::endl;


}

/*****************************************************************************/