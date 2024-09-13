#include <stdio.h>

int main()
{
    int num1, num2, sum;
    int *ptr1 = &num1, *ptr2 = &num2, *ptrSum = &sum;

    printf("Digite o primeiro numero: ");
    scanf("%d", ptr1);
    printf("Digite o segundo numero: ");
    scanf("%d", ptr2);

    *ptrSum = *ptr1 + *ptr2;

    printf("[%p] Soma: %d\n",ptrSum, *ptrSum);

    return 0;
}
