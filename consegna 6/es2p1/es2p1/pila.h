#ifndef PILA_H
#define PILA_H
#define DIMMAX 10
struct structPila
{
    int vet[DIMMAX];
    int ultimo;

};
typedef struct structPila pila;

pila initPila();
void push(pila *);
void pop(pila *);
void print(pila *);

#endif // PILA_H
