#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

tipoLista initLista()
{
    tipoLista lis=NULL;
    return lis;
}
void pushTesta(tipoLista *lis)
{
    tipoLista head;
    if(!(head=(tipoLista)malloc(sizeof(tipoNodo))))
    {
        printf("spazio non sufficiente\n");
        return;
    }
    puts("inserisci valore testa:");
    scanf("%d",&head->info);
    fflush(stdin);
    if((*lis)==NULL)
    {
       *lis=head;
       head->next=NULL;
    }
    else
    {
        head->next=*lis;
        *lis=head;
    }
    print(*lis);
}
void pushCoda(tipoLista *lis)
{
    tipoLista paux;
    if(!(paux=(tipoLista)malloc(sizeof(tipoNodo))))
    {
        printf("spazio non sufficiente\n");
        return;
    }
    puts("inserisci valore coda:");
    scanf("%d",&paux->info);
    fflush(stdin);
    if(lis==NULL)
    {
        *lis=paux;
        print(*lis);
        return;
    }
    tipoLista tmp=*lis;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=paux;
    paux->next=NULL;
    print(*lis);
}
void inserisciDopoElemento(tipoLista lis,int x)
{
    tipoLista tmp=lis;
    int trovato=0;
    while(lis!=NULL)
    {
        if(lis->info==x)
        {
            trovato=1;
            break;
        }
        lis=lis->next;
    }
    if(trovato==0)puts("elemento non trovato");
    else
    {
        tipoLista paux;
        if(!(paux=(tipoLista)malloc(sizeof(tipoNodo))))
        {
            puts("non abbastanza memoria");
            return;
        }
        puts("inserisci valore da inserire:");
        scanf("%d",&paux->info);
        fflush(stdin);
        paux->next=lis->next;
        lis->next=paux;
    }
    print(tmp);
}
void popTesta(tipoLista *lis)
{
    tipoLista tmp=*lis;
    if(tmp==NULL)return;
    *lis=(*lis)->next;
    free(tmp);
    print(*lis);
}
void popCoda(tipoLista *lis)
{
    tipoLista tmp=*lis;
    if(tmp==NULL)return;
    if(tmp->next==NULL)
    {
        *lis=NULL;
        free(tmp);
        print(*lis);
        return;
    }
    while(tmp->next->next!=NULL)
    {
        tmp=tmp->next;
    }
    free(tmp->next);
    tmp->next=NULL;
    print(*lis);

}
void popOccorrenza(tipoLista *lis,int x)
{
    int trovato=0;
    tipoLista tmp=*lis;
    tipoLista prec;
    if(tmp==NULL)
    {
        printf("lista vuota\n");
        return;
    }
    if(tmp->info==x)
    {
        *lis=tmp->next;
        free(tmp);
        print(*lis);
        return;
    }
    while(tmp!=NULL)
    {
        if(tmp->info==x)
        {
            trovato=1;
            break;
        }
        prec=tmp;
        tmp=tmp->next;
    }
    if(trovato==0)puts("elemento non trovato");
    else
    {
        prec->next=tmp->next;
        free(tmp);
        print(*lis);
    }
}


void print(tipoLista lis)
{
    if(lis==NULL)
    {
        puts("lista vuota");
    }
    while(lis!=NULL)
    {
        printf("%d -> ",lis->info);
        lis=lis->next;
    }
    if(lis==NULL)
    {
        printf("#\n");
    }
}
void eliminaLista(tipoLista *lis)
{
    tipoLista tmp;
    while(*lis!=NULL)
    {
        tmp=*lis;
        *lis=(*lis)->next;
        free(tmp);
    }
}

