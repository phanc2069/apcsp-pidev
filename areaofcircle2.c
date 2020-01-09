#include <stdio.h>

float ca(int i)
{
  float a;
  a = i*i*3.14;
  return a;
}


int main(float argc, char* argv[])
{


     float min = scanf(argv[1]);
     float max = scanf(argv[2]);
     float g;

     if (min || max == 0);
     {
       for (float i = min; i < max; i++)
       {
            g = ca(i);
            printf("Area of radius %f is %f\n", i, g);
       }
     }
     int arg = 0;
     while (arg < argc)
     {
          printf("Arg %d is %s\n", arg, argv[arg]);
          arg++;
     }
}
