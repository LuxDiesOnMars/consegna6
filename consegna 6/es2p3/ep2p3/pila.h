#ifndef PILA_H
#define PILA_H
struct structPila
{
    int info;
    struct structPila *next;
};
typedef struct structPila tipoNodo;
typedef tipoNodo *tipoPila;

tipoPila initPila();
void push(tipoPila *);
void pop(tipoPila *);
void print(tipoPila *);
void visualizza(tipoPila *);

#endif // PILA_H
