#include <iostream>
using namespace std;

int main () {

// Luas Trapesium

    int luas, nSisi1, nSisi2, tinggi;

    cout << "Masukan nilai sisi Pertama Trapesium : ";
    cin >> nSisi1;

    cout << "Masukan Nilai Sisi Kedua Trapesium : ";
    cin >> nSisi2;

    cout << "Masukan Nilai Tinggi Trapesium : ";
    cin >> tinggi;

    luas = 0.5*(nSisi1 + nSisi2)* tinggi;

    cout << "Nilai Sisi Pertama Trapesium : " << nSisi1 << endl;
    cout << "Nilai Sisi Kedua Trapesium : " << nSisi2 << endl;
    cout << "Nilai Tinggi Trapesium : " << tinggi << endl;

    cout << "Luas Trapesiumnya Adalah : " << luas << endl;

// Volume Prisma Segitiga

    int volume, alas, tinggi2, tprisma;

    cout << "Input Nilai Alas : ";
    cin >> alas;

    cout << "Input Nilai tinggi : ";
    cin >> tinggi2;

    cout << "Input Nilai Tinggi Prisma : ";
    cin >> tprisma;

    volume = 0.5 * (alas * tinggi2) * tprisma;

    cout << "Nilai Alas Adalah : " << alas << endl;
    cout << "Nilai tinggi : " << tinggi2 << endl;
    cout << "Nilai Tinggi Prisma : " << tprisma << endl;

    cout << "Jadi Volume Prisma Segitiganya adalah : " << volume << endl;
    
// Keliling Prisma Segitiga

    int keliling, panjang, lebar, tinggi3;

    cout << "Masukkan Panjang Prisma Segitiga : ";
    cin >> panjang;

    cout << "Masukkan lebar Prisma Segitiga : ";
    cin >> lebar;

    cout << "Masukkan Tinggi Prisma Segitiga : ";
    cin >> tinggi3;

    keliling = 4*(panjang+lebar+tinggi3);

    cout << "Panjang Prisma : " << panjang << endl;
    cout << "Lebar Prisma : " << lebar << endl;
    cout << "Tinggi : " << tinggi3 << endl;

    cout << "Jadi Keliling Prisma Segitiga adalah : " << keliling << endl;

    return 0;
}