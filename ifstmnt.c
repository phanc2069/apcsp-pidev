#include <stdio.h>

int main()
{
  int a = -2;

  // if statement to test is a is equal to 0
  if (a == 0)
  {
    printf("a (%d) is 0\n", a);
  }
  else if (a > 0)
  {
    printf("a (%d) is greater 0\n", a);
  }
  else if (a < 0)
  {
    printf("a (%d) is less 0\n", a);
  }
}
