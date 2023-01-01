#ifndef SNQ_H_INCLUDED
#define SNQ_H_INCLUDED
#include <iostream>

using namespace std;
//stack//
#define Top(S) (S).Top
#define infoS(S) (S).infoS

//queue/
#define Head(Q) ((Q).Head)
#define Tail(Q) ((Q).Tail)
#define info(Q) Q -> info
#define next(Q) Q ->next
#define nil NULL


//stack//
struct film{
    string judul;
    string jadwal;
    string tiketID;
};

struct tiket{
    film infoS[50];
    int Top;
};


//queue//
typedef struct element *adr;

struct element{
    film info;
    adr next;
};

struct bioskop{
    adr Head, Tail;
};


//Stack//
void createFilm(tiket &S);
bool isEmpty(tiket S);
bool isFull(tiket S);
void PushTicket(tiket &S, string judul, string jadwal);
void pop(tiket &S);
void printInfo(tiket S);


//queue//
void createAntrian(bioskop &Q);
void CreateElement(film filmBaru, adr &P);
void enqueue(bioskop &Q, adr P);
film dequeue(bioskop &Q, adr &P);
bool isEmptyJadwal(bioskop Q);
void printInfoQ(bioskop Q);


#endif // SNQ_H_INCLUDED
