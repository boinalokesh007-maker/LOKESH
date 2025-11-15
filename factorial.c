#include<stdio.h>
int main ()
{
	int num,i;
	int factorial=1;
	printf("Enter an positive integer");
	scanf("%d",&num);
	if(num<0)
	 {
	 printf("factorial of a negative number doesn't exist.\n");
     }
     else
	 {
     	for(i=1;i<=num;i++)
		 	{ 
     	factorial *= i; }
       
     	printf("factorial of %d = %d\n",num,factorial);
	 }
	 return 0;
}
