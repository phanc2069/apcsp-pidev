#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
struct Info {
char firstname[1000];
char lastname[1000];
int age, Studentid;
};

void printStudent(struct Info* student)
{
  printf("First Name: %s, Last Name: %s, Age: %d, Student ID: %d\n", student->firstname, student->lastname,student->age, student->Studentid);
}

int main()
{
  int i;
  struct Info student;
  char input[1028];
  int p;
  struct Info secure[1000];
  int g = 1;
  char count;
  int truecount;
  printf("Insert number of students\n");
  while (g == 1)
  {
    fgets(input, 256, stdin);
    sscanf(input, "%s", &count);
    if (isdigit(count))
    {
      g = 0;
      truecount = atoi(&count);
      truecount = realcount;
    }
    else
    {
      printf("Invalid input. Please plug in a number:\n");
      g = 1;
    }

  }
  while (i != truecount)
    {
    printf("Insert student info (first last age id):\n");
    fgets(input, 256, stdin);
    sscanf(input, "%s" "%s" "%d" "%d", student.firstname, student.lastname, &student.age, &student.Studentid);
    if (isdigit(*student.first))
      {
      p = atoi(student.firstname);
      p = p -1 ;
      printStudent(&secure[p]);
      }
    else
      {
      secure[i] = student;
      printStudent(&secure[i]);
      i = i+1;
       }
    }
  printf("You can search for students by number (1 - %d).\n", truecount);
  while (g == 0)
  {
    printf("Print student location (#)\n");
    fgets(input, 256, stdin);
    sscanf(input, "%s" "%s" "%d" "%d", student.firstname, student.lastname, &student.age, &student.Studentid);
    if (isdigit(*student.firstname))
      {
      p = atoi(student.firstname);
      p = p -1 ;
      printStudent(&secure[p]);
      }
  }
}
