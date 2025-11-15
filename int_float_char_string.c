#include<stdio.h>
int main()
{
	int a ;
	float b;
	char ch;
	char str[101];
	printf("enter the number ");
	scanf("%d",&a);
		printf("enter the float point value");
		scanf("%f",&b);
			printf("enter the character\n");
			scanf(" %c",&ch);
				printf("enter the string");
				scanf("%s",str);
					printf("%d\n%f\n%c\n%s",a,b,ch,str);
					return 0;
	
}
