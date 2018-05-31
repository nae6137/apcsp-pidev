
#include <stdio.h>
#include <string.h>

struct Student {
  char FirstName[50];
  char LastName[50];
  char Age[100];
  int studentid;
};


void printStudent(struct Student* student)
{
  // a new copy of student
  printf("my student is -\n");
  printf("  First name:%s\n", Student.FirstName);
  printf("  Last name:%s\n", Student.LastName);
  printf("  Age:%s\n", Student.age);
  printf("  id:%d\n", Student.studentid);
}

void printStudent2(struct Student* student)
{
  printf("my student is -\n");
  printf("  First name:%s\n", student->FirstName);
  printf("  Last name:%s\n", student->LastName);
  printf("  Age:%s\n", student->Age);
  printf("  id:%d\n", student->studentid);
}

int main()
{
  // create two students
  struct Student mystudent1;
  struct Student mystudent2;

  // fill one student with info - note strcpy
  strcpy(mystudent1.FirstName, "Emily");
  strcpy(mystudent1.LastName, "Na");
  strcpy(mystudent1.Age, "18");
  mystudent1.studentid = 1206137;

  // pass by value
  printStudent(mystudent1);

  // pass by ref - generally preferred as we don't make a copy
  printStudent2(&mystudent1);
}

