#include<stdio.h>
#include<string.h>

struct student{
    char name[50][50];
    int age;
    int marks ;
};

void main()
{
struct student s1;
printf("Enter name: ");
gets(s1.name);
printf("Enter age: ");
scanf("%d", &s1.age);
printf("Enter marks: ");
scanf("%d", &s1.marks);
printf("The details are: \n Name: %s",s1.name);
printf("\n Age: %d", s1.age);
}


