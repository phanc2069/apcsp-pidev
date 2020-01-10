#include <stdio.h>
#include <string.h>

struct Student {
  char Firstname[50];
  char Lastname[50];
  int Age[100];
  int Studentid;
};


void printStudentByVal(struct Student stud)
{
  // a new copy of book
  printf("Student info:\n");
  printf("  First name:%s\n", stud->Firstname);
  printf("  Last name:%s\n", stud->Lastname);
  printf("  Age:%d\n", stud->Age);
  printf("  id:%d\n", stud->Studentid);
}

void printStudentByPtr(struct Student* stud)
{
  printf("Student info:\n");
  printf("  First name:%s\n", stud->Firstname);
  printf("  Last name:%s\n", stud->Lastname);
  printf("  Age:%d\n", stud->Age);
  printf("  id:%d\n", stud->studentid);

  // could do it this way, but -> is easier
 // printf("  id:%d\n", (*book).bookid);
}
void Student_array[1000];

int main()
{

 char Firstname;
 char Lastname;
 int Age;
 int Studentid;

 void Student_array[] = {"%s, %s, %d, %d", &Firstname, &Lastname, &Age, &Studentid}
  struct Student Jane;
  struct Student Joe;

  // fill one book with info - note strcpy
  strcpy*(Joe.Firstname, "Joe");
  strcpy*(Joe.Lastname, "Shmoe");
  strcpy(Joe.Age, "16");
  Joe.Studentid = 62782;

  // pass by value
  printStudentByVal(Joe);

  // pass by ref - generally preferred as we don't make a copy
  printStudentByPtr(Joe);
}
