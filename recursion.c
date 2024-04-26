#include<stdio.h>
int factor(int n,int i)
{
	if(i<=n)
	{
		
		if(n%i==0)
	{
		printf("\t%d",i);
	}
	factor(n,i+1);
}}
int main()
{
	printf("\n");
	factor(4,1);
	printf("\n");
	factor(7,1);
}
