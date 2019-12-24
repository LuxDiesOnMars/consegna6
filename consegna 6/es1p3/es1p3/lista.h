#ifndef LISTA_H
#define LISTA_H

struct structLista
{
    int info;
    struct structLista *next;
};
typedef struct structLista tipoNodo;
typedef tipoNodo *tipoLista;

tipoLista initLista();
void pushTesta(tipoLista *);
void pushCoda(tipoLista *);
void inserisciDopoElemento(tipoLista ,int);
void popTesta(tipoLista *);
void popCoda(tipoLista *);
void popOccorrenza(tipoLista *,int);
void print(tipoLista );
void eliminaLista(tipoLista *);



#endif // LISTA_H
