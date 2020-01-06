#include <stdio.h>

int main()
{
  int n = 3;
  int a;
  int i = 0;
  for (i=1; i < 100; i++)
    if ( i % n == 0 )
    {
      printf("%d\n" , i);
    }
    i = i + 1;
  return 0;
}
