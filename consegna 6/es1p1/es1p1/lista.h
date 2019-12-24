#ifndef LISTA_H
#define LISTA_H
#define DIMMAX 10

struct structLista
{
    int vet[DIMMAX];
    int ultimo;
};
typedef struct structLista lista;

lista initLista();
void pushTesta(lista *);
void pushCoda(lista *);
void inserisciDopoElemento(lista *,int);
void popTesta(lista *);
void popCoda(lista *);
void popOccorrenza(lista *,int);
void print(lista *);



#endif // LISTA_H
