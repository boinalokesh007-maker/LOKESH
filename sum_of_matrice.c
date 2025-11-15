#include <stdio.h>
int main()
{
    int a[2][2] = {{1, 2}, {2, 3}};
    int b[2][2] = {{4, 5}, {5, 6}};
    int i, j,sum[2][2];

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Sum of two matrices:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}


