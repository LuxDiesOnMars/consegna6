#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main()
{
    tipoPila a=initPila();
    int risp;
    while(1)
    {
        do{
            puts("inserisci opzione:");
            puts("1-push");
            puts("2-pop");
            puts("3-print");
            puts("4-estrai tutto in ordine");
            puts("5-exit");
            scanf("%d",&risp);
            fflush(stdin);
        }while(risp<1 || risp>5);
        switch(risp)
        {
            case 1:
                push(&a);
                break;
            case 2:
                pop(&a);
                break;
            case 3:
                print(&a);
                break;
            case 4:
                visualizza(&a);
                break;
            case 5:
                while(a!=NULL)
                {
                    pop(&a);
                }
                exit(EXIT_SUCCESS);
        }
    }
    return 0;
}
