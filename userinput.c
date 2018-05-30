#include <stdio.h>
#include <string.h>

    float areaofcircle(float r)
    {
    float a = 3.14 * r * r;
    return a;
    }
int main()
    {
    float b;
    float r;
    char input[26];
    int x;
    int* ptrtox;
    int* ptrtoa;
    ptrtoa = &x;

    printf("The circle's radius is %d\n");
    fgets (input, 26, stdin);
    sscanf ("input, %d\n", &x);
    b = areaofcircle (x);
    printf ("The circle's area is %f\n", b);
    }
