#include "coda.h"
#include <stdio.h>
#include <stdlib.h>

coda initCoda()
{
    coda nuova;
    nuova.testa=NULL;
    nuova.coda=NULL;
    return nuova;
}
void push(coda *cod)
{
    tipoLista paux;
    if(!(paux=(tipoLista)malloc(sizeof(tipoNodo))))
    {
        printf("memoria piena\n");
        exit(EXIT_FAILURE);
    }
    puts("inserisci valore:");
    scanf("%d",&paux->info);
    fflush(stdin);
    paux->next=NULL;
    if(cod->testa==NULL)
    {
        cod->testa=paux;
        cod->coda=paux;
        print(cod);
    }
    else
    {
        cod->coda->next=paux;
        cod->coda=paux;
        print(cod);
    }
}
void pop(coda *cod)
{
    tipoLista tmp=cod->testa;
    cod->testa=cod->testa->next;
    free(tmp);
    if(cod->testa==NULL)
    {
        cod->coda=NULL;
    }
    else if(cod->testa->next==NULL)
    {
        cod->coda=cod->testa;
    }
    print(cod);

}
void print(coda *cod)
{
    tipoLista tmp=cod->testa;
    while(tmp!=NULL)
    {
        printf("%d\t",tmp->info);
        tmp=tmp->next;
    }
    putchar('\n');
}
