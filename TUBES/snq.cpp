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
    int i = S.Top;
    if (isEmpty(S)){
        cout<<"Stack Kosong"<<endl;
    } else {
        cout<<"Jumlah Tiket"<<endl;
        for(i ; i>=1; i--){
            cout<<S.infoS[i].tiketID;
        }
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
    if(isEmptyJadwal(Q)){
        Head(Q) = P;
        Tail(Q) = P;
    } else {
        next(Tail(Q)) = P;
        Tail(Q) = P;
    }

}

film dequeue(bioskop &Q, adr &P){
    film keluar;
    P = Head(Q);

    keluar.judul = Head(Q)->info.judul;
    keluar.jadwal = Head(Q)->info.jadwal;

    if(isEmptyJadwal(Q)){
        cout<<"<<<<<<<<<<<<<<<<< Tidak Ada Antrian >>>>>>>>>>>>>>>>>>>>>>>";
    } else if (Tail(Q)== Head(Q)) {
        Tail(Q) == nil;
        Head(Q) == nil;
    } else {
        Head(Q) = next(Head(Q));
        Head(Q) = next(P);
        next(P) = nil;
    }
    return keluar;
}

void showSemuaAntrian(bioskop Q){
    adr P;
    if(Head(Q) != nil){
        P = Head(Q);
        int maxJudul = 8;
        int maxJadwal = 4;
        int lenJudul = 0;
        int lenName = 0;
        while (P != nil){
            lenJudul = (info(P).judul).lenght();
            if(maxJudul < lenJudul){
                maxJudul = lenJudul;
            }
            lenJadwal = (info(P).jadwal).lenght();
            if(maxJadwal < lenJadwal){
                maxJadwal = lenJadwal;
            }
            P = next(P);
        for(int i = 0; i < maxJudul + maxJadwal; i++){
            cout<<"=";
        }
        cout<<endl;
        P = Head(Q);

        }

}

bool isEmptyJadwal(bioskop Q){
    if(Head(Q) == nil && Tail(Q) == nil){
        return true;
    } else {
        return false;
    }


}
