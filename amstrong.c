#include<stdio.h>
#include<math.h>
int main()
{
    int num, r = 0, temp, n = 0, rem;
    scanf("%d", &num);
    temp = num;

    while (temp != 0) {
        temp /= 10;
        ++n;
    }

    temp = num;

    while (temp != 0) {
        rem = temp % 10;
        r += pow(rem, n);
        temp /= 10;
    }

    if (r == num)
        printf("It is an Armstrong number");
    else
        printf("It is not an Armstrong number");
        
    return 0;
}

