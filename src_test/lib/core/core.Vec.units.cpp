/******************************************************************************
 * 
 * 
 * 
 * 
******************************************************************************/
#include <iostream>
#include "tester/Unit_Test.h"
#include "core/Vec.h"
/*****************************************************************************/


int main()
{

    std::cout << "#############################################" << std::endl;
    std::cout << "        Core - Vec - Unit Tests              " << std::endl;
    std::cout << "#############################################" << std::endl;


    Unit_Test ut("core.Vec.units");


    Vec a(1.0, 2.0, 3.0);
    ut.assert(1.0, a.get_x(), 1.0e-8, "Vec::get_x()");
    ut.assert(2.0, a.get_y(), 1.0e-8, "Vec::get_y()");
    ut.assert(3.0, a.get_z(), 1.0e-8, "Vec::get_z()");


    a.set_x(9.0);
    ut.assert(9.0, a.get_x(), 1.0e-8, "Vec::set_x() Vec::get_x()");


    Vec b(1.0, 2.0, 3.0);
    Vec c(4.0, -3.0, 4.0);

    Vec d = b + c;
    ut.assert(5.0, d.get_x(), 1.0e-8, "operator(+)");
    ut.assert(-1.0, d.get_y(), 1.0e-8, "operator(+)");
    ut.assert(7.0, d.get_z(), 1.0e-8, "operator(+)");

    Vec e = b - c;
    ut.assert(-3.0, e.get_x(), 1.0e-8, "operator(-)");
    ut.assert(5.0, e.get_y(), 1.0e-8, "operator(-)");
    ut.assert(-1.0, e.get_z(), 1.0e-8, "operator(-)");

    Vec f;
    Vec g;
    double rd {0.0};
    double dotproduct {0.0};
    double scalar {0.0};
    Vec crossproduct {};
    Vec scalarboost {};

    scalar = 2.1;
    f.set_xyz(1.0, 2.0, 3.0);
    g.set_xyz(4.0, 6.0, 3.0);
    rd = f | g;
    ut.assert(5.0, rd, 1.0e-8, "operator(|) distance");
    dotproduct = f % g;
    ut.assert(25.0, dotproduct, 1.0e-8, "operator(%) dot product");
    crossproduct = f * g;
    ut.assert(-12.0, crossproduct.get_x(), 1.0e-8, "operator(*) cross product");
    ut.assert(9.0, crossproduct.get_y(), 1.0e-8, "operator(*) cross product");
    ut.assert(-2.0, crossproduct.get_z(), 1.0e-8, "operator(*) cross product");
    scalarboost = f * scalar;
    ut.assert(2.1, scalarboost.get_x(), 1.0e-8, "operator(*) scalar boost");
    ut.assert(4.2, scalarboost.get_y(), 1.0e-8, "operator(*) scalar boost");
    ut.assert(6.3, scalarboost.get_z(), 1.0e-8, "operator(*) scalar boost");


    scalar = -2.7;
    f.set_xyz(5.3, -3.1, 2.87);
    g.set_xyz(-3.1, -0.18, 1.88);
    rd = f | g;
    ut.assert(8.8541798, rd, 1.0e-6, "operator(|) distance");
    dotproduct = f % g;
    ut.assert(-10.1664, dotproduct, 1.0e-8, "operator(%) dot product");
    crossproduct = f * g;
    ut.assert(-5.3114, crossproduct.get_x(), 1.0e-8, "operator(*) cross product");
    ut.assert(-18.673, crossproduct.get_y(), 1.0e-8, "operator(*) cross product");
    ut.assert(-10.546, crossproduct.get_z(), 1.0e-8, "operator(*) cross product");
    scalarboost = f * scalar;
    ut.assert(-14.04, scalarboost.get_x(), 1.0e-8, "operator(*) scalar boost");
    ut.assert(8.37, scalarboost.get_y(), 1.0e-8, "operator(*) scalar boost");
    ut.assert(-7.749, scalarboost.get_z(), 1.0e-8, "operator(*) scalar boost");




    // End test
    ut.end();

    return 0;
}



/*****************************************************************************/