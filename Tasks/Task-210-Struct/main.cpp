#include "mbed.h"
#include <cstdio>

// Date Type ComplexNumber_C
typedef struct {
  double real;
  double imag;
} ComplexNumber_C;


int main() {

    //Create instance of a complex number
    ComplexNumber_C p;

    //Initialise each attribute 
    p.real = 2.0;
    p.imag = 3.0;
    
    //Create and Initialise 
    ComplexNumber_C q = {1.0, 1.0};

    // TASK:
    // Create another complex number y
    ComplexNumber_C y;

    // Calculate the complex sum of p and q and store in y
    y.real = p.real + q.real;
    y.imag = p.imag + q.imag;
    // Use printf to display as a complex number (hint: you need two placeholders)
    printf("y real is %.1f y imag is %.1f\n", y.real, y.imag);


    while (true) {
    }
}
