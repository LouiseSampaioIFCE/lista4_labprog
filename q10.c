#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 15
#define N 7  

int main()
{
    int *X = (int*)malloc(TAM * sizeof(int));
    int *F = (int*)malloc(N * sizeof(int));

    if (X == NULL || F == NULL)
    {
        printf("Erro ao alocar memoria.\n");
        exit(1);
    }

    srand(time(NULL));

    printf("Vetor X:\n");
    for (int i = 0; i < TAM; i++)
    {
        *(X + i) = rand() % N;
        printf("%d ", *(X + i));
    }
    printf("\n");

    for (int i = 0; i < N; i++)
    {
        *(F + i) = 0;
    }

    for (int i = 0; i < TAM; i++)
    {
        (*(F + *(X + i)))++;
    }

    printf("Vetor F (contagem de ocorrencias):\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", *(F + i));
    }
    printf("\n");

    free(X);
    free(F);

    return 0;
}
