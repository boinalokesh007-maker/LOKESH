#include<stdio.h>

int main()
{
    int eng, mat, phy, sci, hist, total;
    float avg;

    printf("Enter marks for English: ");
    scanf("%d", &eng);

    printf("Enter marks for Mathematics: ");
    scanf("%d", &mat);

    printf("Enter marks for Physics: ");
    scanf("%d", &phy);

    printf("Enter marks for Science: ");
    scanf("%d", &sci);

    printf("Enter marks for History: ");
    scanf("%d", &hist);

    total = eng + mat + phy + sci + hist;
    avg = total / 5.0;

    printf("Total = %d\n", total);
    printf("Average = %.2f\n", avg);

    return 0;
}


