/******************************************************************************
 * 
 * 
 * 
 * 
 * 
******************************************************************************/
#ifndef TESTER_ASSERT_H
#define TESTER_ASSERT_H
/*****************************************************************************/
#include <iostream>
#include <vector>
#include <string>
/*****************************************************************************/


class Assert
{

public:

    static bool assert(bool expected, bool found);

    static bool assert(int expected, int found);
    static bool assert(std::vector<int> expected, std::vector<int> found);

    static bool assert(double expected, double found, double tolerance);
    static bool assert(double expected, double found);
    static bool assert(std::vector<double> expected, std::vector<double> found, double tolerance);
    static bool assert(std::vector<double> expected, std::vector<double> found);

    static bool assert(std::string expected, std::string found);


private:
    

};

/*****************************************************************************/
#endif