#include "mbed.h"
#include "ComplexNumber.hpp"

// main() runs in its own thread in the OS
int main()
{
    /*
    ComplexNumber c1(2.0,3.0);
    ComplexNumber c2(1.0,-1.0);
    ComplexNumber c1_copy = c1;
    c1.add(c2);   //c1 = c1 + c2
    c1.display();
    c1_copy.display();*/
    
    //Subtract: Added and tested 
    ComplexNumber sc1(5.0, 7.0);
    ComplexNumber sc2(2.0, 3.0);
   //Copied Values 
    ComplexNumber sc1_copy = sc1;
    ComplexNumber sc2_copy = sc2;
    
    sc1.subtract(sc2);
    ComplexNumber SResult = sc1_copy.subtractFrom(sc2_copy);
    //Results should be the same in output

    sc1.display();
    SResult.display();

    //Multiply: Added and Tested
    ComplexNumber mc1(3.0, 4.0);
    ComplexNumber mc2(5.0, 4.0);
    //Values are copied as when they are resolved they remain the same 
    ComplexNumber mc1_copy = mc1;
    ComplexNumber mc2_copy = mc2;
    
    mc1.mulitply(mc2);
    ComplexNumber MResult = mc1_copy.MulitplyFrom(mc2_copy);

    mc1.display();
    MResult.display();

    //Divide: Added and Tested
    ComplexNumber dc1(12.0, 16.0);
    ComplexNumber dc2(3.0, 4.0);
    
    ComplexNumber dc1_copy = dc1;
    ComplexNumber dc2_copy = dc2;
    
    dc1.divide(dc2);
    ComplexNumber DResult = dc1_copy.divideBy(dc2_copy);

    dc1.display();
    DResult.display();

/*
    ComplexNumber c3 = c1.addedTo(c2);
    c3.conjugate();
    c3.display();
     
    //Create new scope
    {
        ComplexNumber test(1.0);
        test.display();
    }
    //test is now out of scope and should be destroyed
    */
    while (true);
}

