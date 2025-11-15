#include<stdio.h>
int main()
{
	int a[10],n,i;
	int key,found=0,low=0,high=9,mid;
	printf("enter the no.of elements");
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the key value");
	scanf("%d",&key);
	while(low<=high)
    {
	   mid=(low+high)/2;
	
	if(key==a[mid])
	{
		found=1;
		break;
	}
	else if(key<a[mid])
	{
		high=mid-1;
	}
	else
	{
		low=mid+1;
	}
	}
	 if(found==1)
	 {
	 	printf("element found");
	 	
	 }
	 else
	 {
	 	printf("element not found");
	 }
	 return 0;
}
