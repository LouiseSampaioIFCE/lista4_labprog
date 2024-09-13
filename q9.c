#include <stdio.h>
#include <stdlib.h>

#define TAM 10 

int main()
{
    int *vetor = (int*)malloc(TAM * sizeof(int));
    int temp;

    if (vetor == NULL)
    {
        printf("Erro ao alocar memoria.\n");
        exit(1);
    }

    printf("Digite %d elementos:\n", TAM);
    for (int i = 0; i < TAM; i++)
    {
        scanf("%d", vetor + i);
    }

    for (int *i = vetor; i < vetor + TAM - 1; i++)
    {
        for (int *j = vetor; j < vetor + TAM - (i - vetor + 1); j++)
        {
            if (*j > *(j + 1))
            {
                temp = *j;
                *j = *(j + 1);
                *(j + 1) = temp;
            }
        }
    }

    printf("Vetor ordenado:\n");
    for (int i = 0; i < TAM; i++)
    {
        printf("%d ", *(vetor + i));
    }
    printf("\n");

    free(vetor);

    return 0;
}
