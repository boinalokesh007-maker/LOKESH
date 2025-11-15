//string comparision
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20]={"ABCDEFGHIJKLMNO"};
	char str2[20]={"ABCD"};
	int res;
	res=strcmp(str1,str2);
	if(res==0)
	printf("both are equal");
	else if(res<0)
	printf("str1 is lower than str2");
	else 
	printf("str1 is greater than str2");
	return 0;
}
