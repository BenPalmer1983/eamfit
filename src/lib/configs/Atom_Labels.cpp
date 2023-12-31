/******************************************************************************
 * 
 * 
 * 
 * 
******************************************************************************/
#include "Atom_Labels.h"
/*****************************************************************************/


Atom_Labels& Atom_Labels::get()
{    
    static Atom_Labels instance;
    return instance;
}



int Atom_Labels::get_id(std::string label_in)
{    
    std::string label = Stringf::trim(label_in);

    if(Atom_Labels::labels.size() == 0)
    {
        Atom_Labels::labels.push_back(label);
        return 0;
    }
    else
    {
        for(int i=0; i<Atom_Labels::labels.size(); i++)
        {
            if(Atom_Labels::labels[i] == label)
            {
                return i;
            }
        }

        Atom_Labels::labels.push_back(label);
        return Atom_Labels::labels.size() - 1;

    }
    
    return 0;
}



std::string Atom_Labels::get_label(int id)
{    
    return Atom_Labels::labels[id];
}

/*****************************************************************************/