
#include <stdio.h>

    float areaofcircle (float r)
    {
        printf("r=\n");
        float a = 3.14 * (r*r);
        return a;
    }

int main()

    {
    float b;
    float r;
    for (float i = 3.5; i<12.5; i++)
        {
        b = areaofcircle (i);
        printf("The circle's area is: %f\n", b);
        }

