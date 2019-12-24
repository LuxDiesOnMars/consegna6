#include <stdio.h>
#include <stdlib.h>
#include "coda.h"

int main()
{
    coda a=initCoda();
    int risp;
    while(1)
    {
        do{
            puts("inserire opzione:");
            puts("1-push");
            puts("2-pop");
            puts("3-print");
            puts("4-exit");
            scanf("%d",&risp);
            fflush(stdin);
        }while(risp<1 || risp>4);
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
                if(a.testa!=NULL)
                {
                    tipoLista tmp=a.testa;
                    while(a.testa!=NULL)
                    {
                        a.testa=a.testa->next;
                        free(tmp);
                        tmp=a.testa;
                    }
                }
                exit(EXIT_SUCCESS);

        }
    }
    return 0;
}
