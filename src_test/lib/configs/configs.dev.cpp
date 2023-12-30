#include <iostream>
#include "configs/Atom_Labels.h"
#include "configs/Config.h"


int main()
{

    std::cout << "CONFIGS LIB" << std::endl;
    std::cout << "configs" << std::endl;
    std::cout << "development tests" << std::endl;
    std::cout << std::endl;


    Atom_Labels & atom_labels = Atom_Labels::get();

    int id;
    id = atom_labels.get_id("Al");
    std::cout << id << std::endl;
    
    id = atom_labels.get_id("Al");
    std::cout << id << std::endl;

    id = atom_labels.get_id("Fe");
    std::cout << id << std::endl;

    id = atom_labels.get_id("Pd");
    std::cout << id << std::endl;

    id = atom_labels.get_id("Al");
    std::cout << id << std::endl;



    return 0;
}




