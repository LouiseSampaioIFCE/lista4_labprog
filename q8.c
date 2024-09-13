#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 100 

int main()
{
    char *str = (char*)malloc(TAM * sizeof(char));
    char *c = (char*)malloc(sizeof(char));
    char *encontrado;

    if (str == NULL || c == NULL)
    {
        printf("Erro ao alocar memoria.\n");
        exit(1);
    }

    printf("Digite uma string: ");
    fgets(str, TAM, stdin);
    str[strcspn(str, "\n")] = '\0'; 

    printf("Digite o caractere a ser encontrado: ");
    scanf(" %c", c);

    char *s = str;
    while (*s != '\0')
    {
        if (*s == *c)
        {
            encontrado = s;
            break;
        }
        s++;
    }

    if (*s == *c)
    {
        printf("Caractere '%c' encontrado na string.\n", *c);
    }
    else
    {
        printf("Caractere '%c' nao encontrado na string.\n", *c);
    }

    free(str);
    free(c);

    return 0;
}
