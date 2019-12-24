#include "pila.h"
#include <stdio.h>
#include <stdlib.h>

tipoPila initPila()
{
    tipoPila nuova=NULL;
    return nuova;
}
void push(tipoPila *pil)
{
    tipoPila head;
    if(!(head=(tipoPila)malloc(sizeof(tipoNodo))))
    {
        printf("non abbastanza spazio");
        exit(EXIT_FAILURE);
    }
    printf("inserire valore:\n");
    scanf("%d",&head->info);
    fflush(stdin);
    head->next=*pil;
    *pil=head;
    print(pil);
}
void pop(tipoPila *pil)
{
    tipoPila tmp=*pil;
    *pil=(*pil)->next;
    free(tmp);
    print(pil);
}
void print(tipoPila *pil)
{
    tipoPila tmp=*pil;
    while(tmp!=NULL)
    {
        printf("%d -> ",tmp->info);
        tmp=tmp->next;
    }
    puts("#");
}

void visualizza(tipoPila *pil)
{
    tipoPila tmp;
    while(*pil!=NULL)
    {
        tmp=*pil;
        printf("%d -> ",(*pil)->info);
        *pil=(*pil)->next;
        free(tmp);
    }
    puts("#");
}
