#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz1[3][3],matriz2[3][3],resultado[3][3];
    int x,y;
    for(x=0;x<3;x++)
    {
        for(y=0;y<3;y++)
        {
            resultado[x][y] = matriz1[x][y] + matriz2[x][y];
            //printf("%d\n",resultado[x][y]);
        }
    }
    printf("%d",resultado);
    return 0;
}
