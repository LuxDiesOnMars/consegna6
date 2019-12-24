#include "pila.h"
#include <stdio.h>


pila initPila()
{
    pila p;
    p.ultimo=-1;
    return p;
}
void push(pila *pil)
{
    if(pil->ultimo==DIMMAX-1)
    {
        puts("spazio non sufficiente");
        return;
    }
    if(pil->ultimo==-1)
    {
        puts("inserisci elemento da inserire:");
        scanf("%d",&(pil->vet[0]));
        fflush(stdin);
        pil->ultimo++;
        print(pil);
        return;
    }
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
void pop(pila *pil)
{
    for(int i=0;i<pil->ultimo;i++)
    {
        pil->vet[i]=pil->vet[i+1];
    }
    if(pil->ultimo==-1)return;
    pil->ultimo--;
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
