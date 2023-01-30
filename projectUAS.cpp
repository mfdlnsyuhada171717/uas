#include <iostream>

using namespace std;
/*type data ini untuk memanggil fungsi yang ada dibawah*/
void utama(string nama){
    cout <<"=====SELAMAT DATANG SHOWROOM ABABIL===== " << endl;
}

int main() {
    /*Utama                     :Nama fungsi agar bisa dipanggil kedalam program
    Int pilihan                 :Variabel ini digunakan untuk menentukan menu yang dipilih
    int total paket             :Variabel ini digunakan untuk menampung harga masing masing paket
    int banyak                  :Variabel ini digunakan untuk menampung banyaknya pesanan
    int hasil=0                 :Variabel ini digunakan untuk menampung hasil
    char pilihan paket          :Variabel ini digunakan untuk menampung pilihan pengguna pada opsi pemilihan paket
    char yes/no                 :Variabel ini digunakan untuk menampung hasil opsi apakah ada pesanan lainnya atau tidak
    int x=0                     :Variabel x ini digunakan untuk array yang terhubung dengan variabel total seluruh pesanan
    int total seluruh pesanan[x]:Variabel ini tergabung dengan array 1 dimensi dari variabel x*/
    utama("nama");
    int pilihan, totalPaket, banyak, hasil=0;
    char pilihanPaket,yesNo;
    int x=0;
    int totalSeluruhPesanan[x];

        cout <<"List Motor yang ready :" << endl;
        cout <<"1. Motor Sport" << endl;
        cout <<"2. Motor Bebek" << endl;
        cout <<"3. Motor Custom"<< endl;
    /*Do while ini digunakan untuk perulangan atau mengulang statement sebanyak 1x,jika benar maka akan diulang kembali*/
        do{
            cout <<"Masukan Menu Yang Dipilih : ";
            cin>>pilihan;
    /*system cls ini digunakan untuk menghapus program yang dicetak sebelumnya*/
            menu :
            system("cls");
    /*Variabel ini digunakan saat statment masukan menu yang dipilih dan memilih diantara itu maka memunculkan case*/
    switch(pilihan){
        case 1:
    cout <<"List Motor Sport"<< endl;
    cout <<"A. Ninja XZ25 : Rp.120.000.000"<< endl;
    cout <<"B. Honda CBR250RR : Rp.75.000.000"<< endl;
    cout <<"C. Ducati Diavel : Rp.600.000.000" << endl;

    cout <<"Masukan Pilihan Paket : ";
    cin>>pilihanPaket;
    /*Fungsi If else ini untuk jika pilihan bernilai A/a maka variabel total paket akan diisi harga motor yang tertera*/
    if(pilihanPaket == 'A' || pilihanPaket == 'a'){
        totalPaket=120000000;
    }  else if(pilihanPaket == 'B' || pilihanPaket == 'b'){
        totalPaket=75000000;
    }  else if(pilihanPaket == 'C' || pilihanPaket == 'c'){
        totalPaket=600000000;
    }  else {
        cout <<"Paket Tidak Tersedia" << endl;
    }

    cout <<"Berapa Banyak Pesanan? ";
    cin >> banyak;
    /*variabel ini digunakan untuk menampung harga dikali banyaknya pesanan*/
    totalSeluruhPesanan[x]=totalPaket*banyak;

    cout <<"Apakah Ada Pesanan Lainnya (Y/N)?";
    cin>>yesNo;
    
        system("cls");
    break;
        case 2:
        cout <<"List Motor Bebek"<< endl;
        cout <<"A. Yamaha Aerox2022 : Rp.30.000.000"<< endl;
        cout <<"B. Honda NMAX2022 : Rp.28.000.000"<< endl;
        cout <<"C. Honda Vario165 2022 : Rp.29.000.000"<< endl;

        cout <<"Masukan Pilihan Paket : ";
        cin >> pilihanPaket;
    
    if(pilihanPaket == 'A' || pilihanPaket == 'a'){
        totalPaket=30000000;
    }   else if(pilihanPaket == 'B' || pilihanPaket == 'b'){
        totalPaket=28000000;
    }   else if(pilihanPaket == 'C' || pilihanPaket == 'c'){
        totalPaket=29000000;
    }   else {
        cout <<"Paket tidak Tersedia" << endl;
    }

    cout <<"Berapa Banyak Pesanan ? ";
    cin>>banyak;

    totalSeluruhPesanan[x]=totalPaket*banyak;

    cout <<"Apakah Ada Pesanan Lainnya (Y/N)?";
    cin>>yesNo;

        system("cls");
    break;
        case 3:
        cout <<"List Motor Custom"<< endl;
        cout <<"A. Clevland Ace 250 Misfit : Rp.70.000.000"<< endl;
        cout <<"B. Honda Tiger Japstyle : Rp.20.000.000"<< endl;
        cout <<"C. Cafe Racer : Rp.15.000.000"<< endl;

        cout <<"Masukan Pilihan Paket : ";
        cin>>pilihanPaket;

    if(pilihanPaket == 'A' || pilihanPaket == 'a'){
        totalPaket=70000000;
    }   else if(pilihanPaket == 'B' || pilihanPaket == 'b'){
        totalPaket=20000000;
    }   else if(pilihanPaket == 'C' || pilihanPaket == 'c'){
        totalPaket=15000000;
    }   else {
        cout <<"Paket Tidak Tersedia"<< endl;
    }
    
    cout <<"Berapa Banyak Pesanan ? ";
    cin>>banyak;

    totalSeluruhPesanan[x]=totalPaket*banyak;

    cout <<"Apakah Ada pesanan Lainnya (Y/N)?";
    cin>>yesNo;
    
    system("cls");
    /*Break disini untuk memberhentikan program dan untuk melanjutkan program selanjutnya*/
    break;

    }
    /*x++ ini yaitu increment,setelah melalui proses increment maka, x= x+1 jadi x= 0+1 maka apabila proses while(yesNo) benar maka x=1*/
    x++;
    } while(yesNo == 'Y' || yesNo == 'y');

    cout <<"=====Pembayaran===== "<< endl;
    /*proses penjumlahan array disimpan pada variabel hasil*/
    for(int i=0;i<x;i++){
        hasil=hasil+totalSeluruhPesanan[i];
    }

   /*dan terakhir untuk memunculkan program akhir dengan kata total bayar lalu kata hasil tersebut hasil pembayaran total*/
    cout <<"Total Bayar : "<< hasil << endl;
}
