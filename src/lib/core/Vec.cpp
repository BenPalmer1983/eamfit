/******************************************************************************
 * 
 * 
 * 
 * 
 * 
******************************************************************************/
#include "Vec.h"
/*****************************************************************************/

// Constructor

Vec::Vec()
{
    Vec::set_xyz(0.0, 0.0, 0.0);
}

Vec::Vec(double x, double y, double z)
{
    Vec::set_xyz(x, y, z);
}


// Setters

void Vec::set_x(double x_in)
{    
    x = x_in;
}

void Vec::set_y(double y_in)
{    
    y = y_in;
}

void Vec::set_z(double z_in)
{    
    z = z_in;
}

void Vec::set_xyz(double x_in, double y_in, double z_in)
{    
    x = x_in;
    y = y_in;
    z = z_in;
}


// Getters

double const Vec::get_x()
{
    return x;
}

double const Vec::get_y()
{
    return y;
}

double const Vec::get_z()
{
    return z;
}

// Display

void const Vec::display()
{
    if(x < 0)
    {
        std::cout << "-";  
    }
    std::cout << x << "i";
    if(y < 0)
    {
        std::cout << "-";  
    }
    else
    {
        std::cout << "+";  
    }
    std::cout << abs(y) << "j";
    if(z < 0)
    {
        std::cout << "-";  
    }
    else
    {
        std::cout << "+";  
    }
    std::cout << abs(z) << "k" << std::endl;
}

// Overload

Vec Vec::operator+(Vec& rhs)
{
    Vec vec_sum {};
    vec_sum.set_x(Vec::get_x() + rhs.get_x());
    vec_sum.set_y(Vec::get_y() + rhs.get_y());
    vec_sum.set_z(Vec::get_z() + rhs.get_z());
    return vec_sum;
}

Vec Vec::operator-(Vec& rhs)
{
    Vec vec_sum {};
    vec_sum.set_x(Vec::get_x() - rhs.get_x());
    vec_sum.set_y(Vec::get_y() - rhs.get_y());
    vec_sum.set_z(Vec::get_z() - rhs.get_z());
    return vec_sum;
}


double Vec::operator|(Vec& rhs)
{
    double dxsq = pow(Vec::get_x() - rhs.get_x(), 2);
    double dysq = pow(Vec::get_y() - rhs.get_y(), 2);
    double dzsq = pow(Vec::get_z() - rhs.get_z(), 2);
    return sqrt(dxsq + dysq + dzsq);
}


/*****************************************************************************/