/******************************************************************************
 * 
 * 
 * 
 * 
******************************************************************************/
#ifndef STRINGF_H
#define STRINGF_H
/*****************************************************************************/
#include <iostream>
#include <vector>
#include <string>
/*****************************************************************************/


class Stringf
{

public:

    static std::string upper(std::string string_in);
    static std::string lower(std::string string_in);
    static std::string trim_left(std::string string_in);
    static std::string trim_right(std::string string_in);
    static std::string trim(std::string string_in);


};

/*****************************************************************************/
#endif