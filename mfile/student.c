#include <stdio.h>
#include "student.h"

void printStudent(struct Info* student)
{
  printf("First Name: %s, Last Name: %s, Age: %d, Student ID: %d\n", student->firstname, student->lastname,student->age, student->Studentid);
}
