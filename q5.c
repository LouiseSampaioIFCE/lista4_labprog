#include <stdio.h>
#include <stdlib.h>

#define TAM 100 

int main()
{
    char *str = (char*)malloc(TAM * sizeof(char));
    if (str == NULL)
    {
        printf("Erro ao alocar memoria.\n");
        exit(1);
    }

    printf("Digite uma string: ");
    fgets(str, TAM, stdin);
    str[strcspn(str, "\n")] = '\0'; 

    char *ptr = str;
    while (*ptr != '\0') 
    {
        ptr++;
    }

    int tamanho = ptr - str;

    printf("Tamanho da string: %d\n", tamanho);

    free(str);

    return 0;
}
