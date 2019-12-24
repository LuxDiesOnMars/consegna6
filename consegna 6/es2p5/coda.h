#ifndef CODA_H
#define CODA_H

struct structCoda
{
    int *vet;
    int ultimo;
};

typedef struct structCoda coda;

coda initCoda();
void push(coda *);
void pop(coda *);
void print(coda *);



#endif // CODA_H
