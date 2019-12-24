#include "coda.h"
#include <stdlib.h>
#include <stdio.h>


coda initCoda()
{
    coda nuova;
    nuova.primo=-1;
    nuova.primo=-1;
    return nuova;
}
void push(coda *cod)
{
    if(!full(cod))
    {
        printf("coda piena");
        exit(EXIT_FAILURE);
    }
    int val;
    puts("inserisci valore");
    scanf("%d",&val);
    if(cod->primo==-1)
    {
        cod->primo=0;
        cod->lista[cod->primo]=val;
        cod->ultimo=cod->primo;
        print(cod);
    }
    else
    {
        cod->ultimo=(cod->ultimo+1)%MAXCOD;
        cod->lista[cod->ultimo]=val;
        print(cod);
    }

}

void pop(coda *cod)
{
    if(cod->ultimo==-1)
    {
        return;
    }
    if(cod->primo==cod->ultimo)
    {
        cod->primo=-1;
        cod->ultimo=-1;
        print(cod);
    }
    else
    {
        cod->primo=(cod->primo+1)%MAXCOD;
        print(cod);
    }

}
void print(coda *cod)
{
    if(cod->primo==-1)
    {
        printf("coda vuota\n");
        return;
    }
    int tmp=cod->primo;
    printf("%d\t",cod->lista[tmp]);
    if(cod->primo==cod->ultimo)
    {
        putenv('n');
        return;
    }
    tmp=(tmp+1)%MAXCOD;
    while(tmp!=cod->ultimo+1)
    {
        printf("%d\t",cod->lista[tmp]);
        tmp=(tmp+1)%MAXCOD;
    }
    putchar('\n');
}

int full(coda *cod)
{
    if(((cod->ultimo+1)%MAXCOD)==cod->ultimo)return 0;
    else return 1;

}
