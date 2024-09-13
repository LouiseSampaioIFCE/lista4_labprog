#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 100 

int main()
{
    char *str1 = (char*)malloc(TAM * sizeof(char));
    char *str2 = (char*)malloc(TAM * sizeof(char));
    char *concat = (char*)malloc(2 * TAM * sizeof(char));

    if (str1 == NULL || str2 == NULL || concat == NULL)
    {
        printf("Erro ao alocar memoria.\n");
        exit(1);
    }

    printf("Digite a primeira string: ");
    fgets(str1, TAM, stdin);
    str1[strcspn(str1, "\n")] = '\0'; 

    printf("Digite a segunda string: ");
    fgets(str2, TAM, stdin);
    str2[strcspn(str2, "\n")] = '\0'; 

    char *s1 = str1;
    char *s2 = str2;
    char *c = concat;

    while (*s1 != '\0')
    {
        *c = *s1;
        s1++;
        c++;
    }

    while (*s2 != '\0')
    {
        *c = *s2;
        s2++;
        c++;
    }
    *c = '\0'; 

    printf("String concatenada: %s\n", concat);

    free(str1);
    free(str2);
    free(concat);

    return 0;
}
