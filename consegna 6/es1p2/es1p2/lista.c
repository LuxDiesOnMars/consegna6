#include "lista.h"
#include <stdio.h>
#include <stdlib.h>


void print(lista *lis)
{
    if(lis->ultimo==-1)
    {
        puts("lista vuota");
        return;
    }
    else
    {
        for(int i=0;i<=lis->ultimo;i++)
        {
            printf("%d\t",lis->vet[i]);
        }
        putchar('\n');
    }
}

lista initLista()
{
    lista n;
    n.vet=NULL;
    n.ultimo=-1;
    return n;
}
void pushCoda(lista *lis)
{
    if(lis->ultimo==DIMMAX-1)
    {
        puts("non abbastanza spazio in lista");
        print(lis);
        return;
    }
    else
    {
        if(lis->ultimo==-1)
        {
            lis->vet=(int *)malloc(sizeof(int));
        }
        else
        {
            lis->vet=(int *)realloc(lis->vet,sizeof(int)*(lis->ultimo+2));
        }
        puts("inserire valore");
        scanf("%d",&lis->vet[(lis->ultimo)+1]);
        fflush(stdin);
        ++(lis->ultimo);
    }

    print(lis);


}
void pushTesta(lista *lis)
{
    if(lis->ultimo==DIMMAX-1)
    {
        puts("non abbastanza spazio in lista");
        print(lis);
        return;
    }
    else
    {
        if(lis->ultimo==-1)
        {
            lis->vet=(int *)malloc(sizeof(int));
        }
        else
        {
            lis->vet=(int *)realloc(lis->vet,sizeof(int)*(lis->ultimo+2));
        }
        for(int i=lis->ultimo+1;i>0;i--)
        {
            lis->vet[i]=lis->vet[i-1];
        }
        ++(lis->ultimo);
        puts("inserire valore");
        scanf("%d",&lis->vet[0]);
        fflush(stdin);
    }
    print(lis);
}
void inserisciDopoElemento(lista *lis,int x)
{
    if(lis->ultimo==DIMMAX-1)
    {
        puts("dimensione massima raggiunta");
        return;
    }

    int tmp;
    int trovato=0;
    for(int i=0;i<=lis->ultimo;i++)
    {
        if(lis->vet[i]==x)
        {
            tmp=i;
            trovato=1;
            break;
        }
    }
    if(trovato)
    {
        lis->vet=(int *)realloc(lis->vet,sizeof(int)*(lis->ultimo+2));
        int r;
        puts("inserisci valore da inserire");
        scanf("%d",&r);
        fflush(stdin);
        for(int j=lis->ultimo+1;j>tmp+1;j--)
        {
            lis->vet[j]=lis->vet[j-1];
        }
        lis->vet[tmp+1]=r;
        lis->ultimo++;
    }
    else puts("elemento non presente");
    print(lis);
}
void popTesta(lista *lis)
{
    if(lis->ultimo==-1)return;
    else if(lis->ultimo==0)
    {
        lis->vet=(int *)realloc(lis->vet,sizeof(int)*0);
        lis->ultimo=-1;
        print(lis);
        return;
    }
    lis->vet=(int *)realloc(lis->vet,sizeof(int)*(lis->ultimo));
    for(int i=0;i<lis->ultimo;i++)
    {
        lis->vet[i]=lis->vet[i+1];
    }
    lis->ultimo--;
    print(lis);
}
void popCoda(lista *lis)
{
    if(lis->ultimo==-1)return;
    lis->vet=(int *)realloc(lis->vet,sizeof(int)*(lis->ultimo));
    --(lis->ultimo);
    print(lis);

}
void popOccorrenza(lista *lis,int x)
{
    int tmp;
    int trovato=0;
    for(int i=0;i<=lis->ultimo;i++)
    {

        if(lis->vet[i]==x)
        {
            tmp=i;
            trovato=1;
            break;
        }
    }
    if(trovato)
    {
        lis->vet=(int *)realloc(lis->vet,sizeof(int)*(lis->ultimo));
        for(int j=tmp;j<lis->ultimo;j++)
        {
            lis->vet[j]=lis->vet[j+1];
        }
        lis->ultimo--;
    }
    else puts("occorrenza non trovata");
    print(lis);
}


