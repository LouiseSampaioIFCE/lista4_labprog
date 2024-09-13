#include <stdio.h>
#include <stdlib.h>

#define TAM 5 

int main()
{
    int *vetor = (int*)malloc(TAM * sizeof(int));

    if (vetor == NULL)
    {
        printf("Erro ao alocar memoria.\n");
        exit(1);
    }

    printf("Digite %d elementos:\n", TAM);
    for (int i = 0; i < TAM; i++)
    {
        scanf("%d", (vetor+i));
    }

    printf("Valores e enderecos do vetor:\n");
    for (int i = 0; i < TAM; i++)
    {
        printf("Valor: %d, Endereco: %p\n", *(vetor+i), (vetor+i));
    }

    free(vetor);

    return 0;
}
