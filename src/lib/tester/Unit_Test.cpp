/******************************************************************************
 * 
 * 
 * 
 * 
 * 
******************************************************************************/
#include "Unit_Test.h"
/*****************************************************************************/


// Constructor
/*****************************************************************************/

Unit_Test::Unit_Test(std::string test_name)
{
    Unit_Test::test_name = test_name;
}

void Unit_Test::assert_inner(bool result, std::string remarks)
{
    if(result == false)
    {
        Unit_Test::successful = false;
    }

    Unit_Test::results.push_back(result);
    Unit_Test::remarks.push_back(remarks);

    if(result)
    {
        std::cout << "### PASSED ###   ";
    }
    else
    {
        std::cout << "### FAILED ###   ";
    }
    
    std::cout << remarks << std::endl;

}


// Asserts
/*****************************************************************************/

void Unit_Test::assert(bool expected, bool found, std::string remarks)
{
    bool result = Assert::assert(expected, found);
    Unit_Test::assert_inner(result, remarks);
}

void Unit_Test::assert(int expected, int found, std::string remarks)
{
    bool result = Assert::assert(expected, found);
    Unit_Test::assert_inner(result, remarks);
}

void Unit_Test::assert(std::vector<int> expected, std::vector<int> found, std::string remarks)
{
    bool result = Assert::assert(expected, found);
    Unit_Test::assert_inner(result, remarks);
}

void Unit_Test::assert(double expected, double found, double tolerance, std::string remarks)
{
    bool result = Assert::assert(expected, found, tolerance);
    Unit_Test::assert_inner(result, remarks);
}

void Unit_Test::assert(std::vector<double> expected, std::vector<double> found, double tolerance, std::string remarks)
{
    bool result = Assert::assert(expected, found, tolerance);
    Unit_Test::assert_inner(result, remarks);
}

void Unit_Test::assert(std::string expected, std::string found, std::string remarks)
{
    bool result = Assert::assert(expected, found);
    Unit_Test::assert_inner(result, remarks);
}

void Unit_Test::end()
{    
    std::ofstream fh(Unit_Test::test_name + ".log");

    for(int i=0; i<Unit_Test::results.size(); i++)
    {
        if(Unit_Test::results[i])
        {
            fh << "1" << "," << "### PASSED ###" << "," << Unit_Test::remarks[i] << std::endl;
        }
        else
        {
            fh << "0" << "," << "### FAILED ###" << "," << Unit_Test::remarks[i] << std::endl;
        }
        
    }
    
    fh.close();
}



/*****************************************************************************/

