#include <stdio.h>
#include <stdlib.h>

int main()
{
    char entrada[21];
    char aux;
    int i,largo,mitad;
    printf("Ingrese un texto: ");
    scanf("%s",&entrada);
    largo = strlen(entrada);
    mitad = largo/2;
    largo--;
    //printf("%d",strlen(entrada));
    for(i=0;i<mitad;i++)
    {
        aux=entrada[i];
        entrada[i]=entrada[largo-i];
        entrada[largo-i]=aux;
    }
    printf("%s",entrada);
    return 0;
}
