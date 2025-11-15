#include<stdio.h>
int main(){
	int a[3][3],i,j,r,c,sum=0;
    printf("enter the rows and columns of matrix a ");
	scanf("%d%d",&r,&c);
	printf("enter the elements ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			
			scanf("%d",&a[i][j]);
		}
	}
	printf("the original matrix is :\n ");
	printf("\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j)
			{
			sum=sum+a[i][j];
			}
		}
	}
	printf("Trace of matrix : %d",sum);
}
