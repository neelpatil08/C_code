#include<stdio.h>
#include<string.h>
struct student{
	char name[20];
	int rollno;
	int marks;
	}s,s1;
	int main()
	{
	strcpy(s.name,"NEEL");
	s.rollno=7;
	s.marks=300;
	printf("Name=%s\n ROLL NO%d\n MARKS=%d\n",s.name,s.rollno,s.marks);
}