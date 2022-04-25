#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,ant1,ant2,fib;
    printf("Ingrese un numero: ");
    scanf("%d",&num);
    switch(num)
    {
    case 0:
        fib=0;
        break;
    case 1:
        fib=1;
        break;
    default:
        ant1=0;
        ant2=1;
        for(i=2;i<=num;i++)
        {
            fib=ant1+ant2;
            ant1=ant2;
            ant2=fib;
        }
        break;
    }
    printf("Resultado: %d",fib);
    return 0;
}
