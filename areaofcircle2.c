#include <stdio.h>

float circle_area(float i)
{
  float a;
  a = i*i*3.14;
  return a;
}

int main(int argc, char* argv[])
{
  int count = 0;
  float min = 0, max = 0, g;
  if (argc > 2)
  {
     count += sscanf(argv[1], "%f", &min);
     count += sscanf(argv[2], "%f", &max);
  }
    while (count < 2)
    {
      printf("\nPlease enter two numbers greater than zero: ");
      count = scanf("%f %f", &min, &max);
      if (count < 2)
      {
        char junk[100];
        scanf("%s", junk);
      }
      else if (max <= min)
      {
        printf("Min must be smaller than max.\n");
        count = 0;
      }
      
    }
     if (min || max >= 0)
     {
       for (float i = min; i <= max; ++i)
       {
            // printf("get here 2");
            g = circle_area(i);
            printf("Area of circle %f is %f\n", i, g);
       }
     }
}
