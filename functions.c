#include<stdio.h>
int add(int x ,int y);
int main()
{
	int a, b,sum=0;
	scanf("%d%d",&a,&b);
	sum=add(a,b);
	printf("sum is %d",sum);
}
	int add(int a, int b)
	{
		int res;
		res=a+b;
		return res;
	}
