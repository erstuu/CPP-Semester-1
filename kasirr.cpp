#include <iostream>
using namespace std;

int main () {
    long hargaBuku, jumlahBuku, totalBayar;
    string judulBuku;

    cout << "Masukan Judul Buku : ";
    getline(cin, judulBuku);
    cout << "Harga Buku : ";
    cin >> hargaBuku;
    cout << "Jumlah Buku : ";
    cin >> jumlahBuku;
    cout << endl;
    cout << "---------------------";
    cout << endl;
    cout << "Judul Buku : " << judulBuku << endl;
    cout << "Harga Buku : " << hargaBuku << endl;
    cout << "Jumlah Buku : " << jumlahBuku << endl;
    cout << "Total : " << (hargaBuku*jumlahBuku) << endl;
 
    totalBayar = (hargaBuku*jumlahBuku);
    if ((totalBayar) > 150000 ) {
        cout << "Diskon 10%" << endl;
        cout << "Total Pembayaran Anda Adalah : " << (totalBayar-(totalBayar*0.1)) << endl;
    }
    else;
    
    return 0;
}