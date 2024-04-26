#include<stdio.h>
#include<string.h>
struct student{
	char name[20];
	int rollno;int marks;
}s[5];
int main()
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("ENTER NAME,ROLLNO,MARKS");
		scanf("%s%d%d",s[i].name,&s[i].rollno,&s[i].marks);
	}
	printf("STUDENT INFO:");
	for(i=0;i<5;i++)
	{
		printf("\n NAME=%s \n ROLL NUMBER=%d \n MARKS=%d,s[i].name,s[i].rollno,s[i].marks");
	}
}
