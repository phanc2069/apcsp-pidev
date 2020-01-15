#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "student.h"

int main()
{
  int i;
  struct Info student;
  char input[1028];
  int a;
  struct Info secure[1000];
  int c = 1;
  char count;
  int truecount;

  printf("Insert number of students\n");

  while (c == 1)
  {
    fgets(input, 1028, stdin);
    sscanf(input, "%s", &count);
    if (isdigit(count))
    {
      c = 0;
      truecount = atoi(&count);
    }
    else
    {
      printf("Invalid input. Please plug in a number:\n");
      c = 1;
    }

  }
  while (i != truecount)
    {
    printf("Insert student info (first name, last name, age, Student id):\n");
    fgets(input, 1028, stdin);
    sscanf(input, "%s" "%s" "%d" "%d", student.firstname, student.lastname, &student.age, &student.Studentid);
    if (isdigit(*student.firstname))
      {
      a = atoi(student.firstname);
      a = a -1 ;
      printStudent(&secure[a]);
      }
    else
      {
      secure[i] = student;
      printStudent(&secure[i]);
      i = i+1;
       }
    }
  printf("You can search for students by number (1 - %d).\n", truecount);
  while (c == 0)
  {
    printf("Print student location (#)\n");
    fgets(input, 1028, stdin);
    sscanf(input, "%s" "%s" "%d" "%d", student.firstname, student.lastname, &student.age, &student.Studentid);
    if (isdigit(*student.firstname))
      {
      a = atoi(student.firstname);
      a = a -1 ;
      printStudent(&secure[a]);
      }
  }
}
