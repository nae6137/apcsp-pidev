#include<stdio.h>

int main()
{
  int a = 545;
  int integerType;
  float floatType;
  double doubleType;
  char charType;

  // Sizeof operator is sued to evaluate the size of variable
  printf ("Size of a: %ld bytes\n", sizeof(integerType));
  printf ("Size of a: %ld bytes\n", sizeof(floatType));
  printf ("Size of a: %ld bytes\n", sizeof(doubleType));
  printf ("Size of a: %ld bytes\n", sizeof(charType));
}


