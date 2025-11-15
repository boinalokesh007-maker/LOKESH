#include<stdio.h>
int main()
{
	int a[5]={10,20,30,40,50};
	int i,key=30,found=0;
	for(i=0;i<5;i++)
	{
		if(a[i]==key)
		{
			printf("the element found at index:%d",i);
			found=1;
			break;
		}
	}if(!found)
	{printf("element not found");
	}
	return 0;
}
	
	
	
	
	

