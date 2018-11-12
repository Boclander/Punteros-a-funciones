#include <stdio.h>
#include <stdlib.h>

void mostrar(int);
void otroMostrar(int);

int main()
{
    void (*array[2]) (int);
    int i;

    array[0] = mostrar;
    array[1] = otroMostrar;

    for(i=0; i<2; i++)
    {
        array[i](45);
    }
}



void mostrar(int x)
{
    printf("Hello world! |%d|\n", x);
}

void otroMostrar(int r)
{
    printf("Puto el que lee |%d|\n", r);
}
