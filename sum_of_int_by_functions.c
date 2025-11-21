#include<stdio.h>
int add(int x, int y );
int main(){
	int a, b ;
	scanf ("%d%d",&a,&b);
	add(a,b);
}
int add(int x, int y )
{
	int sum=0;
	sum = x+y;
	printf("Sum is %d",sum);
}
