
#include"snq.h"

int main()
{
    bioskop Q;
    film data;
    tiket S;
    createAntrian(Q);
    createFilm(S);
    int x;
    int i = 1;
    adr P;

    cout<<"        ||Selamat datang di bioskop BABEH!||"<<endl;
    cout<<endl;
    cout<<"Mau Nonton Berapa Film Bre?";
    cin>>x;
    cout<<endl;
    cout<<"Silahkan Antri"<<endl;
    cout<<endl;
    while(i <= x){
        cout<<"Judul: ";
        cin>>data.judul;
        cout<<"Durasi (Jam : Menit): ";
        cin>>data.durasi;
        cout<<endl;
        CreateElement(data, P);
        enqueue(Q, P);
        i++;
    }
    i = 1;
    while (i <= 5){
        cout<< "==================== DATA ANTRIAN FILM ====================" <<endl;
        printInfoQ(Q);
        cout<<endl;
        cout<<"||Silahkan untuk menonton film ke-"<< i <<"||"<<endl;
        data = dequeue(Q, P);
        PushTicket(S, data.judul, data.durasi);
        cout<< "==================== DATA HISTORY FILM ====================" <<endl;
        printInfo(S);
        cout<<endl;
        i++;
    }
    cout<<"============== FILM SELESAI DIPUTAR SEMUA =============="<<endl;

}
