#include <stdio.h>

int main()
{
    int num1, num2;
    int *ptr1 = &num1, *ptr2 = &num2;
    int temp;

    printf("Digite o primeiro numero: ");
    scanf("%d", ptr1);
    printf("Digite o segundo numero: ");
    scanf("%d", ptr2);

    printf("Antes da troca: num1 = %d, num2 = %d\n", *ptr1, *ptr2);

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("Depois da troca: num1 = %d, num2 = %d\n", *ptr1, *ptr2);

    return 0;
}
