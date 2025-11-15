#include<stdio.h>
int main()
{
	int a[10],i,j,n,min,temp;
	printf("enter the no.of elements of the array");
	scanf("%d",&n);
	printf("enter the elements into the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Before sorting :");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
	printf("\n");
	printf("After swapping :");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
