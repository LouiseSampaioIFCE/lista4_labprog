#include <stdio.h>

int main()
{
    int num, menor;
    int *ptrMenor = &menor;
    char continuar;

    printf("Digite um numero: ");
    scanf("%d", &num);
    *ptrMenor = num;

    do
    {
        printf("Digite outro numero: ");
        scanf("%d", &num);
        
        if (num < *ptrMenor)
        {
            *ptrMenor = num;
        }

        printf("Menor valor ate agora: %d\n", *ptrMenor);
        printf("Deseja continuar (s/n)? ");
        scanf(" %c", &continuar);
    } 
    while (continuar == 's' || continuar == 'S');

    return 0;
}
