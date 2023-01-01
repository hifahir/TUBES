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

void PushTicket(tiket &S, string judul, string durasi){
    if(isFull(S) == false){
        Top(S)++;
        infoS(S)[Top(S)].judul = judul;
        infoS(S)[Top(S)].durasi = durasi;
    }

}

void pop(tiket &S){
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
        for(i = S.Top ; i>=1; i--){
            cout<<S.infoS[i].judul<<endl;
            cout<<S.infoS[i].durasi<<endl;
            cout<<endl;
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
    keluar.durasi = Head(Q)->info.durasi;

    if(isEmptyJadwal(Q)){
        cout<<"================== Tidak Ada Antrian ==================";
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

void printInfoQ(bioskop Q){
    adr P;
    if(Head(Q) != NULL){
        P = Head(Q);
        while(P != NULL){
            cout<<"Judul Film: "<<info(P).judul<<endl;
            cout<<"Durasi Film (Jam : Menit): "<<info(P).durasi<<endl;
            cout<<endl;
            P = next(P);
        }
    } else {
        cout<<"============================ TIDAK ADA ANTRIAN ============================"<<endl;
    }
}


bool isEmptyJadwal(bioskop Q){
    if(Head(Q) == nil && Tail(Q) == nil){
        return true;
    } else {
        return false;
    }
}
