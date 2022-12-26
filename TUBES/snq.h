#ifndef SNQ_H_INCLUDED
#define SNQ_H_INCLUDED
#include <iostream>

using namespace std;

#define Head(Q) ((Q).Head)
#define Tail(Q) ((Q).Tail)
#define Top(S) ((S).Top)
#define info(S) ((S).info)
#define info(P) P->info
#define next(P) P->next
#define nil NULL

typedef char infotype;

struct film{
    string judul;
    int jadwal;
};

struct tiket{
    infotype info[50];
    int Top;
};
//stack//

typedef struct element *adr;

struct element{
    infotype info;
    adr next;
};

struct bioskop{
    adr Head, Tail;
};
//queue//

//Stack//
void createFilm(film &S);
bool isEmpty(film S);
bool isFull(film S);
void PushTicket(film &S, infotype x);
infotype pop(film &S);
void printInfo(film S);

//queue//
void createAntrian(bioskop &Q);
void CreateElement(infotype filmBaru, adr &P);
void enqueue(bioskop &Q, adr P);
void dequeue(bioskop &Q, adr &P);
void showSemuaAntrian(bioskop Q);
bool isEmptyKursi(bioskop Q);


#endif // SNQ_H_INCLUDED
