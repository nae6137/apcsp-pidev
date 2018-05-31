#include <stdio.h>
#include <string.h>

struct Student 
{
  char FirstName[50];
  char LastName[50];
  char Age[100];
  char studentid;
}


void printStudent(struct Student* student)
{
  printf("my student is -\n");
  printf("  First name:%s\n", student->FirstName);
  printf("  Last name:%s\n", student->LastName);
  printf("  Age:%s\n", student->Age);
  printf("  id:%d\n", student->studentid);
}

int main()
{
  struct student arr[2]
  for (i<2; i=0; i++)
  printf("FirstName:/n")
  printf("LastName:/n")
  printf("Age:/n")
  printf("studentid:/n")
}
    for (i<2; i=0; i++)
    printf("

I GIVE UP :( 

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


