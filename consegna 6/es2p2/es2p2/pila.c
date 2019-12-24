#include "pila.h"
#include <stdio.h>
#include <stdlib.h>

pila initPila()
{
    pila p;
    p.vet=NULL;
    p.ultimo=-1;
    return p;
}
void push(pila *pil)
{

    if(pil->ultimo==-1)
    {
        if(!(pil->vet=(int *)malloc(sizeof(int))))
        {
            printf("non abbastanza memoria");
            exit(EXIT_FAILURE);
        }
        puts("inserisci elemento da inserire:");
        scanf("%d",&(pil->vet[0]));
        fflush(stdin);
        pil->ultimo++;
        print(pil);
        return;
    }
    else
    {
        pil->vet=(int *)realloc(pil->vet,sizeof(int)*((pil->ultimo)+2));
        for(int i=pil->ultimo;i>=0;i--)
        {
            pil->vet[i+1]=pil->vet[i];
        }
        puts("inserisci elemento da inserire:");
        scanf("%d",&(pil->vet[0]));
        fflush(stdin);
        pil->ultimo++;
        print(pil);
    }

}
void pop(pila *pil)
{
    for(int i=0;i<pil->ultimo;i++)
    {
        pil->vet[i]=pil->vet[i+1];
    }
    if(pil->ultimo==-1)return;
    pil->ultimo--;
    pil->vet=(int *)realloc(pil->vet,sizeof(int)*((pil->ultimo)+1));
    if(pil->ultimo==-1)pil->vet=NULL;
    print(pil);

}
void print(pila *pil)
{
    if(pil->ultimo==-1)
    {
        printf("lista vuota\n");
        return;
    }
    for(int i=0;i<=pil->ultimo;i++)
    {
        printf("%d  ",pil->vet[i]);
    }
    putchar('\n');

}
