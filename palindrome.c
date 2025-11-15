#include<stdio.h>
int main()
{
	int t,r,rev=0,n;
	printf("Enter an Integer\n");
	scanf("%d",&n);
	t=n;
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	 if(t==rev)
	 printf("%d is a palindrome",t);
	 else
	 printf("%d is not a palindrome",t);
	 return 0;
}
