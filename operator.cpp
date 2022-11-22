/* OPERATOR ASSIGNMENT
RESTU GEDE PURNAMA
NIM : 2230511063
TEKNIK INFORMATIKA KELAS 1B
*/

#include <iostream>
using namespace std;

int main() {
    int a,b,c,d,e,f,r;
    a = 1;
    b = 2;
    c = 3;
    d = 4;
    e = 0;

    int hasil;
    bool hasil1;

    cout << "****** OPERATOR ASIGNMENT ******" << endl;
//OPERATOR MATEMATIKA
    cout << "////// OPERATOR ARITMATIKA /////" << endl;
    hasil = a + b;
    cout << "Hasil Penambahan a + b : " << hasil << endl;

    hasil = c - b;
    cout << "Hasil Pengurangan c - b  : " << hasil << endl;

    hasil = d * a;
    cout << "Hasil Perkalian d * a  : " << hasil << endl;

    hasil = d / b;
    cout << "Hasil Pembagian d / b  : " << hasil << endl;

//ASSIGNMENT GABUNGAN
    cout << "////// ASSIGNMENT GABUNGAN //////" << endl;
    hasil = f+=a;
    cout << "Hasil dari Assignment gabungan f+=a : " << hasil << endl;

    hasil = d-=b;
    cout << "Hasil dari Assignment gabungan d-=b : " << hasil << endl;

    hasil = d*=(b-a);
    cout << "Hasil dari Assignment gabungan d*=(b-a) : " << hasil << endl;

    hasil = b/=a;
    cout << "Hasil dari Assignment gabungan b/=a : " << hasil << endl;
//INCREMENT
    cout << "////// INCREMENT //////" << endl;
    d=c++;
    cout << "Increment c++ : " << d << endl;
    cout << "Increment c++ : " << c << endl;

    b=++a;
    cout << "Increment ++a : " << b << endl;
    cout << "Increment ++a : " << a << endl;
//OPERATOR RELASI 
    cout << "////// OPERATOR RELASI //////" << endl;
    hasil1 = b==d;
    cout << "Relasi b==d : " << hasil1 << endl;

    hasil1 = c!=d;
    cout << "Relasi c!=d : " <<  hasil1 << endl;

    hasil1 = d>e;
    cout << "Relasi d>e : " << hasil1 << endl;

    hasil1 = e>d;
    cout << "Relasi e>d : " << hasil1 << endl;

    hasil1 = a>=d;
    cout << "Relasi a>=d : " << hasil1 << endl;

    hasil1 = d>=a;
    cout << "Relasi d>a : " << hasil1 << endl;

//OPERATOR LOGIKA
    cout << "////// OPERATOR LOGIKA //////" << endl;
    hasil1 = !a;
    cout << "Hasil dari !a : " << hasil1 << endl;

    hasil1 = a&&d;
    cout << "Hasil dari a&&d : " << hasil1 << endl;

    hasil1 = c||b;
    cout << "Hasil dari C||b : " << hasil1 << endl;

//OPERATOR KONDISIONAL
    cout << "////// OPERATOR KONDISIONAL //////" << endl;
    r = (b>a) ? b : a;
    cout << "Kondisional : " << r << endl;

    r = (d<c) ? d : c;
    cout << "Kondisional : " << r << endl;

    cout << "****** SELESAI ******" << endl;
    return 0;
}