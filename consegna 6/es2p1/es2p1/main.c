#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
int main()
{
    int risp;
    pila nuova=initPila();
    while(1)
    {
        do{
            printf("quale opzione si dedisera compiere\n");
            puts("1-push");
            puts("2-pop");
            puts("3-print");
            puts("4-exit");
            scanf("%d",&risp);
            fflush(stdin);
        }while(risp<1||risp>4);

        switch(risp)
        {
        case 1:
            push(&nuova);
            break;
        case 2:
            pop(&nuova);
            break;
        case 3:
            print(&nuova);
            break;
        case 4:
            exit(EXIT_SUCCESS);
        }
    }
    return 0;
}
