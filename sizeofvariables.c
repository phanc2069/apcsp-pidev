#include<stdio.h>

int main()
{
  int a = 545;
  char b = b;
  float c = 12.3;
  double d = 123.456;
  // print value and size of an int variable
  printf("int a value: %d and size: %d bytes\nchar b value: %c and size: %d bytes\nfloat c value: %f and size: %d bytes\ndouble d value: %d and size: %d bytes\n", a, sizeof(a), b, sizeof(b), c, sizeof(c), d, sizeof(d));
}

