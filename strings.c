#include <stdio.h>
#include <string.h>

int main()
{
  char strlow[2200];
  char strup[] = "abcdefghijklmnopqrstuvwxyz";
  char stra[53];
    for (int i = 0; i<26; i++)
        {
          strlow[i] = 'a' + i;
        }
  if (strcmp(strlow, strup) == 0)
	{
	printf("The strings are the same\n");
	}
  else
	{
        printf("The strings are the same\n");
	}

  strlow[26] = '\0';

  printf("%s %s\n", strlow, strup);

    for (int i = 0; i<strlen(strlow); i++)
        {
          strlow[i] = strlow[i] + ('A' - 'a');
        }

  printf("%s %s\n", strlow, strup);
  if (strcmp(strlow, strup) == 0)
        {
        printf("The strings are the same\n");
        }
  else
        {
        printf("The strings are the different\n");
	}
  strcpy(stra, strlow);
  strcat(stra, strup);
  printf("%s\n", stra);
}
