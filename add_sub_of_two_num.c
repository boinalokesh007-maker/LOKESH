#include<stdio.h>

int main()
{
    int a, b;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("Bitwise AND (a & b) = %d\n", a & b);
    printf("Bitwise OR (a | b) = %d\n", a | b);
    printf("Bitwise XOR (a ^ b) = %d\n", a ^ b);
    printf("Bitwise NOT of a (~a) = %d\n", ~a);
    printf("Bitwise LEFT SHIFT (a << 1) = %d\n", a << 1);
    printf("Bitwise RIGHT SHIFT (a >> 1) = %d\n", a >> 1);

    return 0;
}

