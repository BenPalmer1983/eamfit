#include <iostream>
#include "core/Stringf.h"


int main()
{

    std::cout << "CORE LIB" << std::endl;
    std::cout << "###################################" << std::endl;


    std::cout << "Stringf" << std::endl;

    std::string mixed = "This Is MiXeD casE";
    std::string upper = Stringf::upper(mixed);
    std::cout << upper << std::endl;

    std::string lower = Stringf::lower(mixed);
    std::cout << lower << std::endl;


    std::string padded = "     padded string    ";
    std::string nonpadded = "non     padded string    .";


    std::string left_trimmed = Stringf::trim_left(padded);
    std::cout << "|" << padded << "|" << std::endl;
    std::cout << "|" << left_trimmed << "|" << std::endl;

    left_trimmed = Stringf::trim_left(nonpadded);
    std::cout << "|" << nonpadded << "|" << std::endl;
    std::cout << "|" << left_trimmed << "|" << std::endl;


    std::string right_trimmed = Stringf::trim_right(padded);
    std::cout << "|" << padded << "|" << std::endl;
    std::cout << "|" << right_trimmed << "|" << std::endl;

    right_trimmed = Stringf::trim_right(nonpadded);
    std::cout << "|" << nonpadded << "|" << std::endl;
    std::cout << "|" << right_trimmed << "|" << std::endl;



    std::string trimmed = Stringf::trim(padded);
    std::cout << "|" << padded << "|" << std::endl;
    std::cout << "|" << trimmed << "|" << std::endl;

    trimmed = Stringf::trim(nonpadded);
    std::cout << "|" << nonpadded << "|" << std::endl;
    std::cout << "|" << trimmed << "|" << std::endl;


    return 0;
}




