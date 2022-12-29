#include "snq.h"
//stack//
void createFilm(tiket &S){
    Top(S) = 0;

}

bool isEmpty(tiket S){
    if(Top(S) == 0){
        return true;
    }
    else {
        return false;
    }
}

bool isFull(tiket S){

    if(Top(S) == 50){
        return true;
    } else {
        return false;
    }

}

void PushTicket(tiket &S, string judul, int jadwal){
    if(isFull(S) == false){
        Top(S)++;
        infoS(S)[Top(S)].judul = judul;
        infoS(S)[Top(S)].jadwal = jadwal;
    }

}

film pop(tiket &S){
    if (isEmpty(S)){
        cout<< "Tidak Ada Tiket Untuk Film Ini"<<endl;
    } else {
        Top(S)--;
    }

}

void printInfo(tiket S){
    if(Top(S) != 0){
        int

    }

}

//queue//
void createAntrian(bioskop &Q){
    Head(Q) = nil;
    Tail(Q) = nil;

}

void CreateElement(film filmBaru, adr &P){
    P = new element;
    info(P) = filmBaru;
    next(P) = nil;

}

void enqueue(bioskop &Q, adr P){
    if(isEmptyKursi(Q)){
        Head(Q) = P;
        Tail(Q) = P;
    } else {
        next(Tail(Q)) = P;
        Tail(Q) = P;
    }

}

void dequeue(bioskop &Q, adr &P){




}

void showSemuaAntrian(bioskop Q){


}

bool isEmptyKursi(bioskop Q){


}
