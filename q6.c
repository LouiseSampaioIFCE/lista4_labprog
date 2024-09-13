#include <stdio.h>
#include <stdlib.h>

#define TAM 100 

int main()
{
    char *src = (char*)malloc(TAM * sizeof(char));
    char *dest = (char*)malloc(TAM * sizeof(char));

    if (src == NULL || dest == NULL)
    {
        printf("Erro ao alocar memoria.\n");
        exit(1);
    }

    printf("Digite a string a ser copiada: ");
    fgets(src, TAM, stdin);
    src[strcspn(src, "\n")] = '\0'; 

    char *s = src;
    char *d = dest;
    while (*s != '\0')
    {
        *d = *s;
        s++;
        d++;
    }
    *d = '\0'; 

    printf("String copiada: %s\n", dest);

    free(src);
    free(dest);

    return 0;
}
