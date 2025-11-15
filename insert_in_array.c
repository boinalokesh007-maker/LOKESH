#include<stdio.h>
int main()
{
	int a[5],i,pos;
	printf("Enter the element in the array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the position\n");
	scanf("%d",&pos);
	for(i=pos;i<5;i++)
	{
		a[i-1]=a[i];
	}
	for(i=0;i<4;i++)
	{
		printf("%d\t",a[i]);
	}
	
	return 0;
}
	
	
	
	
	
	
	

