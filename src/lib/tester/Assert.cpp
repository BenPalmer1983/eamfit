/******************************************************************************
 * 
 * 
 * 
 * 
 * 
******************************************************************************/
#include "Assert.h"
/*****************************************************************************/


// BOOLEAN
/*****************************************************************************/

bool Assert::assert(bool expected, bool found)
{
    if(expected == found)
    {
        return true;
    }
    return false;
}


// INTEGER
/*****************************************************************************/

bool Assert::assert(int expected, int found)
{
    if(expected == found)
    {
        return true;
    }
    return false;
}

bool Assert::assert(std::vector<int> expected, std::vector<int> found)
{
    if(expected.size() != found.size())
    {
        return false;
    }
    for(int i=0; i<expected.size(); i++)
    {
        if(expected[i] != found[i])
        {
            return false;
        }
    }
    return true;
}


// DOUBLE
/*****************************************************************************/

bool Assert::assert(double expected, double found, double tolerance)
{
    double rd = abs(expected - found) / (0.5 * (expected + found));
    if(rd < tolerance)
    {
        return true;
    }
    return false;
}

bool Assert::assert(double expected, double found)
{
    return Assert::assert(expected, found, 1.0e-8);
}

bool Assert::assert(std::vector<double> expected, std::vector<double> found, double tolerance)
{
    if(expected.size() != found.size())
    {
        return false;
    }
    for(int i=0; i<expected.size(); i++)
    {
        if(!Assert::assert(expected[i], found[i], tolerance))
        {
            return false;
        }
    }
    return true;
}

bool Assert::assert(std::vector<double> expected, std::vector<double> found)
{
    return Assert::assert(expected, found, 1.0e-8);
}



// STRING
/*****************************************************************************/

bool Assert::assert(std::string expected, std::string found)
{
    if(expected.length() != found.length())
    {
        return false;
    }
    if(expected == found)
    {
        return true;
    }
    return false;
}









/*****************************************************************************/
