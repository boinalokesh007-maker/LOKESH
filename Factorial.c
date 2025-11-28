#include<stdio.h>
int factorial(int n);
int main()
{
	int n;
	long int res; 
	scanf("%d",&n);
	res=factorial(n);
	printf("res=%ld",res);
}
int factorial(int n )
{
	if(n==1)
	{
	return 1;
}
else
{
	return n*factorial(n-1);
	}	
}
