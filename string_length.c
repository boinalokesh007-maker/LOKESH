//string lenght
#include<stdio.h>
#include<string.h>
int main()
{
  char name [10];
  int len;
  gets(name);
  len=strlen(name);
  printf("%d",len);
  return 0;
}
