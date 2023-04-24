#include "main.h"
#include <stdio.h>
#include <math.h>

void addition(complex c1, complex c2, complex *c3)
{
    (*c3).re = (c1.re * c2.re) - (c1.im * c2.im);
    (*c3).im = (c1.re * c2.im) + (c1.im * c2.re);

}