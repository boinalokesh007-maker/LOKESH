#include<stdio.h>
int main(){
	int a[10][10],t[10][10],i,j,r,c;
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
    for(i=0;i<r;i++)
        {
        	for(j=0;j<c;j++)
        	{
        		t[i][j]=a[j][i];
			}
		}
		printf("The transposed matrix is :\n");
		printf("\n");
	for(i=0;i<r;i++)
	 {
	 	for(j=0;j<c;j++)
	 	{
	 		printf("%d\t",t[i][j]);
		}
		printf("\n");
	 }
return 0;
}
