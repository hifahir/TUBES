
#include"snq.h"

int main()
{
    bioskop Q;
    film data;
    tiket S;
    createAntrian(Q);
    int x;
    int i = 1;
    adr P;

    cout<<"Selamat datang di bioskop BABEH! Mau nonton berapa film?";
    cin>>x;
    cout<<endl;
    cout<<"Silahkan Antri"<<endl;
    cout<<endl;
    while(i <= x){
        cout<<"Judul: ";
        cin>>data.judul;
        cout<<"Jadwal: ";
        cin>>data.jadwal;
        cout<<endl;
        CreateElement(data, P);
        enqueue(Q, P);
        i++;
    }
    cout<< "==================== DATA ANTRIAN FILM ====================" <<endl;
    printInfoQ(Q);
    cout<<endl;

    cout<<"Silahkan untuk menonton film pertama"<<endl;

    createFilm(S);

    for(i=0; i <= 0; i++){
        data = dequeue(Q, P);
        PushTicket(S, data.judul, data.jadwal);
    }
    cout<<endl;

    cout<<"==================== DATA ANTRIAN FILM ===================="<<endl;
    printInfoQ(Q);
    cout<<endl;

    cout<<"==================== FILM SELANJUTNYA ===================="<<endl;
    printInfo(S);
    cout<<endl;

    for(i = 0; i <= 0; i++){
        data = dequeue(Q, P);
        pop(S);
    }

    cout<<"============== FILM SELESAI DIPUTAR SEMUA =============="<<endl;
    printInfo(S);
    cout<<endl;
}
