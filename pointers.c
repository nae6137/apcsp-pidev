#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);

  int d;
  int e;
  int* ptrtod;
  int* ptrtoe;

  *ptrtod = &d;
  *ptrtoe = &e;

  d = 1;
  printf("The value of d is %d\n", d);
  e = 3;
  printf("The value of e is %d\n", e);

  *ptrtod = 2;
  printf("The value of d is %d\n", d);

  printf("The value of d is %d\n", d);
  printf("The value of e is %d\n", e);
  printf("The value of ptrtod is %d\" ptrtod);
  printf("The value of ptrtoe is %d\n", ptrtoe);
  printf("It stores the value %d\n", *ptrtod);
  pritnf("It stores the value %d\n", *ptrtoe);
  printf("The address of d is %d\n", &d);
  printf("The address of e is %d\n", &e);
}


