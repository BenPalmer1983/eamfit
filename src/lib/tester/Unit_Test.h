/******************************************************************************
 * 
 * 
 * 
 * 
 * 
******************************************************************************/
#ifndef UNIT_TEST_H
#define UNIT_TEST_H
/*****************************************************************************/
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "Assert.h"
/*****************************************************************************/


class Unit_Test
{

public:

    Unit_Test(std::string test_name);
    void assert_inner(bool result, std::string remarks);

    void assert(bool expected, bool found, std::string remarks);

    void assert(int expected, int found, std::string remarks);
    void assert(std::vector<int> expected, std::vector<int> found, std::string remarks);

    void assert(double expected, double found, double tolerance, std::string remarks);
    void assert(std::vector<double> expected, std::vector<double> found, double tolerance, std::string remarks);

    void assert(std::string expected, std::string found, std::string remarks);

    void end();

private:
    
    std::string test_name {};
    bool successful {true};

    std::vector<bool> results {};
    std::vector<std::string> remarks {};

};

/*****************************************************************************/
#endif