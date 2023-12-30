/******************************************************************************
 * 
 * 
 * 
 * 
 * 
******************************************************************************/
#ifndef CORE_VEC_H
#define CORE_VEC_H
/*****************************************************************************/
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
/*****************************************************************************/


class Vec
{

public:

    Vec();
    Vec(double x, double y, double z);

    void set_x(double x);
    void set_y(double y);
    void set_z(double z);
    void set_xyz(double x, double y, double z);

    double const get_x();
    double const get_y();
    double const get_z();

    void const display();

    Vec operator+(Vec & rhs);
    Vec operator-(Vec & rhs);
    double operator|(Vec & rhs);
    

private:

    double x {0.0};
    double y {0.0};
    double z {0.0};


};

/*****************************************************************************/
#endif