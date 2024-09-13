#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 14 
#define N 7  

int main()
{
    int *vetorX = (int*)malloc(TAM * sizeof(int));
    int *vetorY = (int*)malloc(TAM * sizeof(int));
    int **matrizM = (int**)malloc(N * sizeof(int*));

    if (vetorX == NULL || vetorY == NULL || matrizM == NULL)
    {
        printf("Erro ao alocar memoria.\n");
        exit(1);
    }

    for (int i = 0; i < N; i++)
    {
        *(matrizM + i) = (int*)malloc(N * sizeof(int));
        if (*(matrizM + i) == NULL)
        {
            printf("Erro ao alocar memoria.\n");
            exit(1);
        }
    }

    srand(time(NULL));

    printf("Vetor X:\n");
    for (int i = 0; i < TAM; i++)
    {
        *(vetorX + i) = rand() % N;
        printf("%d ", *(vetorX + i));
    }
    printf("\n");

    printf("Vetor Y:\n");
    for (int i = 0; i < TAM; i++)
    {
        int r = rand() % 11; 
        int xi = *(vetorX + i);

        if (r >= 0 && r <= 3)
        {
            *(vetorY + i) = xi;
        }
        else if (r > 3 && r <= 5)
        {
            *(vetorY + i) = (i > 0) ? *(vetorX + i - 1) : xi; 
        }
        else if (r > 5 && r <= 7)
        {
            *(vetorY + i) = (i < TAM - 1) ? *(vetorX + i + 1) : xi; 
        }
        else if (r > 8 && r <= 9)
        {
            *(vetorY + i) = (i > 1) ? *(vetorX + i - 2) : xi; 
        }
        else if (r > 9 && r <= 10)
        {
            *(vetorY + i) = (i < TAM - 2) ? *(vetorX + i + 2) : xi; 
        }

        printf("%d ", *(vetorY + i));
    }
    printf("\n");

    int *linhaAtual = *(matrizM); 
    for (int i = 0; i < N * N; i++)
    {
        *(linhaAtual + i) = 0;
    }

    for (int i = 0; i < TAM; i++)
    {
        int valorX = *(vetorX + i);
        int valorY = *(vetorY + i);
        *( (*(matrizM + valorX)) + valorY ) += 1;
    }

    printf("Matriz de coocorrencias:\n");
    for (int i = 0; i < N; i++)
    {
        int *linha = *(matrizM + i);
        for (int j = 0; j < N; j++)
        {
            printf("%d ", *(linha + j));
        }
        printf("\n");
    }

    for (int i = 0; i < N; i++)
    {
        free(*(matrizM + i));
    }
    free(vetorX);
    free(vetorY);
    free(matrizM);

    return 0;
}
