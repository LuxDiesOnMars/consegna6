#include "coda.h"
#include <stdio.h>
#include <stdlib.h>

coda initCoda()
{
    coda nuova;
    nuova.vet=NULL;
    nuova.ultimo=-1;
    return nuova;
}
void push(coda *cod)
{
    int val;
    puts("inserire valore");
    scanf("%d",&val);
    fflush(stdin);
    if(cod->vet==NULL)
    {
        cod->ultimo=0;
        int *tmp=(int *)malloc(sizeof(int));
        if(!tmp)
        {
            puts("errore:memoria non suff.");
            exit(EXIT_FAILURE);
        }
        else
        {
            cod->vet=tmp;
            cod->vet[0]=val;
        }
    }
    else
    {
        cod->ultimo++;
        cod->vet=(int *)realloc(cod->vet,sizeof(int)*(cod->ultimo+1));
        if(!cod->vet)
        {
            puts("errore:memoria non suff.");
            exit(EXIT_FAILURE);
        }
        cod->vet[cod->ultimo]=val;
    }

}
void pop(coda *cod)
{
    if(cod->ultimo==-1)return;
    if(cod->ultimo==0)
    {
        free(cod->vet);
        cod->ultimo=-1;
        return;
    }
    for(int i=0;i<cod->ultimo;i++)
    {
        cod->vet[i]=cod->vet[i+1];
    }
    cod->ultimo--;
    cod->vet=(int *)realloc(cod->vet,sizeof(int)*(cod->ultimo+1));
}
void print(coda *cod)
{
    if(cod->ultimo==-1)
    {
        puts("lista vuota");
        return;
    }
    for(int i=0;i<=cod->ultimo;i++)
    {
        printf("%d\t",cod->vet[i]);
    }
    putchar('\n');
}
