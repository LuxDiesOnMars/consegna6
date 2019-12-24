#ifndef CODA_H
#define CODA_H
struct structLista
{
    int info;
    struct structLista *next;
};
typedef struct structLista tipoNodo;
typedef tipoNodo *tipoLista;

struct structCoda
{
    tipoLista testa;
    tipoLista coda;
};

typedef struct structCoda coda;

coda initCoda();
void push(coda *);
void pop(coda *);
void print(coda *);




#endif // CODA_H
