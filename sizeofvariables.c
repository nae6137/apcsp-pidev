#include<stdio.h>

int main()
{
  int a = 545;
  int integerType;
  float floatType;
  double doubleType;
  char charType;
  signed signType;
  unsigned unsignType;


  // Sizeof operator is used to evaluate the size of variable
  printf ("Size of int a: %ld bytes\n", sizeof(integerType));
  printf ("Size of float a: %ld bytes\n", sizeof(floatType));
  printf ("Size of double a: %ld bytes\n", sizeof(doubleType));
  printf ("Size of char a: %ld bytes\n", sizeof(charType));
  printf ("Size of signed a: %ld bytes\n", sizeof(signType));
  printf ("Size of unsigned a: %ld bytes\n", sizeof(unsignType));

}
