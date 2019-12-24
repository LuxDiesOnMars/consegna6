#ifndef CODA_H
#define CODA_H
#define MAXCOD 10
struct structCoda
{
    int lista[MAXCOD];
    int primo;
    int ultimo;
};
typedef struct structCoda coda;

coda initCoda();
void push(coda *);
void pop(coda *);
void print(coda *);
int full(coda *);




#endif // CODA_H
