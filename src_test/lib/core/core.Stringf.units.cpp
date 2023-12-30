/******************************************************************************
 * 
 * 
 * 
 * 
******************************************************************************/
#include <iostream>
#include "tester/Unit_Test.h"
#include "core/Stringf.h"
/*****************************************************************************/


int main()
{

    std::cout << "#############################################" << std::endl;
    std::cout << "        Core - Stringf - Unit Tests          " << std::endl;
    std::cout << "#############################################" << std::endl;


    Unit_Test ut("core.Stringf.units");

    std::string test_string {};
    std::string expected_string {};

    test_string = "sAje iE9 298 FFrw!";
    expected_string = "SAJE IE9 298 FFRW!";
    ut.assert(expected_string, Stringf::upper(test_string), "Stringf::upper()");

    test_string = "  sAje iE9 298 FFrw!  ";
    expected_string = "  SAJE IE9 298 FFRW!  ";
    ut.assert(expected_string, Stringf::upper(test_string), "Stringf::upper()");

    test_string = "   ";
    expected_string = "   ";
    ut.assert(expected_string, Stringf::upper(test_string), "Stringf::upper()");

    test_string = "";
    expected_string = "";
    ut.assert(expected_string, Stringf::upper(test_string), "Stringf::upper()");

    test_string = "sAje iE9 298 FFrw!";
    expected_string = "saje ie9 298 ffrw!";
    ut.assert(expected_string, Stringf::lower(test_string), "Stringf::lower()");

    test_string = "  sAje iE9 298 FFrw!  ";
    expected_string = "  saje ie9 298 ffrw!  ";
    ut.assert(expected_string, Stringf::lower(test_string), "Stringf::lower()");

    test_string = "   ";
    expected_string = "   ";
    ut.assert(expected_string, Stringf::lower(test_string), "Stringf::lower()");

    test_string = "";
    expected_string = "";
    ut.assert(expected_string, Stringf::lower(test_string), "Stringf::lower()");

    test_string = "";
    expected_string = "";
    ut.assert(expected_string, Stringf::trim(test_string), "Stringf::trim()");

    test_string = "    ";
    expected_string = "";
    ut.assert(expected_string, Stringf::trim(test_string), "Stringf::trim()");

    test_string = "  aaa aaa a";
    expected_string = "aaa aaa a";
    ut.assert(expected_string, Stringf::trim(test_string), "Stringf::trim()");

    test_string = "aaa aaa a  ";
    expected_string = "aaa aaa a";
    ut.assert(expected_string, Stringf::trim(test_string), "Stringf::trim()");

    test_string = "  aaa aaa a  ";
    expected_string = "aaa aaa a";
    ut.assert(expected_string, Stringf::trim(test_string), "Stringf::trim()");





    // End test
    ut.end();

    return 0;
}



/*****************************************************************************/