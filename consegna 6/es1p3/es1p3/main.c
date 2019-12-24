#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main()
{
    tipoLista a=initLista();
    int risp;
    while(1)
    {
        do{
            printf("inserisci opzione desiderata:\n");
            puts("1-push testa");
            puts("2-push coda");
            puts("3-push dopo elemento");
            puts("4-pop testa");
            puts("5-pop coda");
            puts("6-pop occorrenza");
            puts("7-esci");
            scanf("%d",&risp);
            fflush(stdin);
        }while(risp<1||risp>7);
        switch(risp)
        {
            case 1:
                pushTesta(&a);
                break;
            case 2:
                pushCoda(&a);
                break;
            case 3:
                printf("dopo quale elemento si desidera inserire dato?\n");
                int y;
                scanf("%d",&y);
                fflush(stdin);
                inserisciDopoElemento(a,y);
                break;
            case 4:
                popTesta(&a);
                break;
            case 5:
                popCoda(&a);
                break;
            case 6:
                printf("quale elemento si desidera eliminare?");
                int j;
                scanf("%d",&j);
                fflush(stdin);
                popOccorrenza(&a,j);
                break;
            case 7:
                eliminaLista(&a);
                exit(EXIT_SUCCESS);

            }

    }
    return 0;
}
