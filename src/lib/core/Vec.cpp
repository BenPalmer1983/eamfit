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
//#######################################

Vec::Vec()
{
    Vec::set_xyz(0.0, 0.0, 0.0);
}

Vec::Vec(double x, double y, double z)
{
    Vec::set_xyz(x, y, z);
}


// Setters
//#######################################

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
//#######################################

double Vec::get_x()
{
    return Vec::x;
}

double Vec::get_y()
{
    return Vec::y;
}

double Vec::get_z()
{
    return Vec::z;
}


// Display
//#######################################

void Vec::display()
{
    if(Vec::x < 0)
    {
        std::cout << "-";  
    }
    std::cout << std::abs(Vec::x) << "i";
    if(Vec::y < 0)
    {
        std::cout << "-";  
    }
    else
    {
        std::cout << "+";  
    }
    std::cout << std::abs(Vec::y) << "j";
    if(Vec::z < 0)
    {
        std::cout << "-";  
    }
    else
    {
        std::cout << "+";  
    }
    std::cout << std::abs(Vec::z) << "k" << std::endl;
}




bool Vec::within_range(Vec a, double range)
{
    double rangesq = range * range;

    double xd = Vec::get_x() - a.get_x();
    double xdsq = xd * xd;

    if(xdsq > rangesq)
    {
        return false;
    }

    double yd = Vec::get_y() - a.get_y();
    double ydsq = yd * yd;

    if(ydsq > rangesq)
    {
        return false;
    }

    double zd = Vec::get_z() - a.get_z();
    double zdsq = zd * zd;

    if(zdsq > rangesq)
    {
        return false;
    }

    if((xdsq + ydsq + zdsq) <= rangesq)
    {
        return true;
    }
    return false;

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


Vec Vec::operator*(Vec& rhs)    // cross product
{
    Vec vec_result {};
    vec_result.set_x(Vec::get_y() * rhs.get_z() - Vec::get_z() * rhs.get_y());
    vec_result.set_y(Vec::get_z() * rhs.get_x() - Vec::get_x() * rhs.get_z());
    vec_result.set_z(Vec::get_x() * rhs.get_y() - Vec::get_y() * rhs.get_x());
    return vec_result;
}


double Vec::operator%(Vec& rhs)         // dot product
{
    double result = Vec::get_x() * rhs.get_x() + Vec::get_y() * rhs.get_y() + Vec::get_z() * rhs.get_z();
    return result;
}


Vec Vec::operator*(double scalar)    //  scalar boost
{
    Vec vec_result {};
    vec_result.set_x(Vec::get_x() * scalar);
    vec_result.set_y(Vec::get_y() * scalar);
    vec_result.set_z(Vec::get_z() * scalar);
    return vec_result;
}




/*****************************************************************************/