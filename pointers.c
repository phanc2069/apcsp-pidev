#include <stdio.h>

int main()
{

  int a;
  float temp;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);

  float d = 7;
  float* ptrtod;

  ptrtod = &d;

  d = 7;
  printf("The value of d is %f\n", d);

  *ptrtod = 10;
  printf("The value of d is %f\n", d);

  printf("The value of ptrtod is %d\n", ptrtod);
  printf("It stores the value %f\n", * ptrtod);
  printf("The address of d is %d\n", &d);

  float e = 8;
  float* ptrtoe;

  ptrtoe = &e;

  e = 8;
  printf("The value of e is %f\n", d);

  *ptrtoe = 11;
  printf("The value of e is %f\n", e);

  printf("The value of ptrtoe is %d\n", ptrtoe);
  printf("It stores the value %f\n", * ptrtoe);
  printf("The address of e is %d\n", &e);

  temp = * ptrtod;
  d = * ptrtoe;
  * ptrtoe = temp;

  printf("The new value of d is %f\n", d);
  printf("The new value of e is %f\n", e);

}
