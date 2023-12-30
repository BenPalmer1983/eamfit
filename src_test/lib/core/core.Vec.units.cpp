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

    Vec f(1.0, 2.0, 3.0);
    Vec g(4.0, 6.0, 3.0);
    double rd = f | g;
    ut.assert(5.0, rd, 1.0e-8, "operator(|)");


    // End test
    ut.end();

    return 0;
}



/*****************************************************************************/