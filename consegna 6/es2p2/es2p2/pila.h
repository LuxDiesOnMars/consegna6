#ifndef PILA_H
#define PILA_H

struct structPila
{
    int *vet;
    int ultimo;

};
typedef struct structPila pila;

pila initPila();
void push(pila *);
void pop(pila *);
void print(pila *);

#endif // PILA_H
