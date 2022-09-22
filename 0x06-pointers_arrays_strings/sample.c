// #include <stdio.h>

// int main(void)
// {
//     int n = 5;
//     int A[n];
//     int B[10];

//     int *ptr = A;  /* is valid */
//     int *ptr2 = B; /* is valid */

//     printf("Address of A: %p\n", ptr);
//     printf("Address of B: %p\n", ptr);
// }

// Program_5_1 :
#include <stdio.h>
#define n 5

void intswap(int *ptrA, int *ptrB)
{
    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;
}

int main(int argc, char *argv[])
{
    int A[n], i = 0;
    for (i = 0; i < n; i++)
        printf("%x \n", A + i);
    printf("\n");

    int C = 10, B = 56;
    intswap(&C, &B);

    printf("Value of B: %d\n", B);
    printf("Value of C: %d\n", C);
}