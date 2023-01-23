#include <iostream>
using namespace std;

struct vill{
    string name;
};

struct vil2{
    string nama;
    string deskripsi;
    string fasilitas;
    int harga;
};

void reservc(){
    int inap, piltod; 
    cin.get();
    string nama, email, norek;
    vil2 price;
    price.harga = 1500000;
    cout << endl;
    system("cls");
    cout << "\t\t===============================================================================" << endl;
    cout << "\t\t====   Untuk pemesanan, silahkan memasukan data diri anda terlebih dahulu  ====" << endl;
    cout << "\t\t===============================================================================" << endl;
    cout << endl;
    cout << "Nama Lengkap : ";
    getline(cin, nama);
    cout << endl;
    cout << "Alamat email : ";
    getline(cin, email);
    cout << "\nBerapa hari anda akan menginap ?  "; 
    cin >> inap;
    cout << endl;

    system("cls");
        if (inap){
        cout << "Total pembayaran anda adalah : " << price.harga*inap << endl;
        cout << "Pilih Metode Pembayaran Anda!" << endl;
        cout << "1. Tunai/Bayar di tempat\n2. Non-Tunai" << endl;
        cout << "Pilihan Anda : ";
        cin >> piltod;

        system ("cls");
        switch (piltod){
        case 1:
        cout << "Anda Memilih Pembayaran Tunai" << endl;
        cout << "Nama Anda                     : " << nama << endl;
        cout << "Alamat email anda             : " << email << endl;
        cout << "Durasi penginapan anda selama : " << inap << "Hari" << endl;
        cout << "Total pembayaran anda menjadi : " << price.harga*inap << endl;
        cout << "Pembayaran dapat anda lakukan di resepsionis villa kami" << endl;
        cout << "Terimakasih" << endl;
        break;

        case 2:
        cout << "Anda Memilih Pembayaran Non-Tunai" << endl;
        cout << "Nama Anda                     : " << nama << endl;
        cout << "Alamat email anda             : " << email << endl;
        cout << "Durasi penginapan anda selama : " << inap << " Hari" << endl;
        cout << "Total pembayaran anda menjadi : " << price.harga*inap << endl;
        cout << "Masukan Nomor Rekening Anda   : ";
        cin >> norek;
        cout << endl;
        cout << "Nomor Rekening Anda Adalah    : " << norek << endl;
        cout << "Total pembayaran anda menjadi : " << price.harga*inap << endl;
        cout << "Terimakasih" << endl;
        break;
    }
    }
}

void reservp(){
    int inap, piltod;
    cin.get();
    string nama, email, norek;
    vil2 price;
    price.harga = 1800000;
    cout << endl;
    system("cls");
    cout << "\t\t===============================================================================" << endl;
    cout << "\t\t====   Untuk pemesanan, silahkan memasukan data diri anda terlebih dahulu  ====" << endl;
    cout << "\t\t===============================================================================" << endl;
    cout << endl;
    cout << "Nama Lengkap : ";
    getline(cin, nama);
    cout << endl;
    cout << "Alamat email : ";
    getline(cin, email);
    cout << "\nBerapa hari anda akan menginap ?  "; 
    cin >> inap;
    cout << endl;

    system("cls");
        if (inap){
        cout << "Total pembayaran anda adalah : " << price.harga*inap << endl;
        cout << "Pilih Metode Pembayaran Anda!" << endl;
        cout << "1. Tunai/Bayar di tempat\n2. Non-Tunai" << endl;
        cout << "Pilihan Anda : ";
        cin >> piltod;

        system ("cls");
        switch (piltod){
        case 1:
        cout << "Anda Memilih Pembayaran Tunai" << endl;
        cout << "Nama Anda                     : " << nama << endl;
        cout << "Alamat email anda             : " << email << endl;
        cout << "Durasi penginapan anda selama : " << inap << "Hari" << endl;
        cout << "Total pembayaran anda menjadi : " << price.harga*inap << endl;
        cout << "Pembayaran dapat anda lakukan di resepsionis villa kami" << endl;
        cout << "Terimakasih" << endl;
        break;

        case 2:
        cout << "Anda Memilih Pembayaran Non-Tunai" << endl;
        cout << "Nama Anda                     : " << nama << endl;
        cout << "Alamat email anda             : " << email << endl;
        cout << "Durasi penginapan anda selama : " << inap << " Hari" << endl;
        cout << "Total pembayaran anda menjadi : " << price.harga*inap << endl;
        cout << "Masukan Nomor Rekening Anda : ";
        cin >> norek;
        cout << endl;
        cout << "Nomor Rekening Anda Adalah : " << norek << endl;
        cout << "Total pembayaran anda menjadi : " << price.harga*inap << endl;
        cout << "Terimakasih" << endl;
        break;
    }
    }
}

void reservn(){
    int inap, piltod;
    cin.get();
    string nama, email, norek;
    vil2 price;
    price.harga = 1700000;
    cout << endl;
    system("cls");
    cout << "\t\t===============================================================================" << endl;
    cout << "\t\t====   Untuk pemesanan, silahkan memasukan data diri anda terlebih dahulu  ====" << endl;
    cout << "\t\t===============================================================================" << endl;
    cout << endl;
    cout << "Nama Lengkap : ";
    getline(cin, nama);
    cout << endl;
    cout << "Alamat email : ";
    getline(cin, email);
    cout << "\nBerapa hari anda akan menginap ?  "; 
    cin >> inap;
    cout << endl;

    system("cls");
        if (inap){
        cout << "Total pembayaran anda adalah : " << price.harga*inap << endl;
        cout << "Pilih Metode Pembayaran Anda!" << endl;
        cout << "1. Tunai/Bayar di tempat\n2. Non-Tunai" << endl;
        cout << "Pilihan Anda : ";
        cin >> piltod;

        system ("cls");
        switch (piltod){
        case 1:
        cout << "Anda Memilih Pembayaran Tunai" << endl;
        cout << "Nama Anda                     : " << nama << endl;
        cout << "Alamat email anda             : " << email << endl;
        cout << "Durasi penginapan anda selama : " << inap << "Hari" << endl;
        cout << "Total pembayaran anda menjadi : " << price.harga*inap << endl;
        cout << "Pembayaran dapat anda lakukan di resepsionis villa kami" << endl;
        cout << "Terimakasih" << endl;
        break;

        case 2:
        cout << "Anda Memilih Pembayaran Non-Tunai" << endl;
        cout << "Nama Anda                     : " << nama << endl;
        cout << "Alamat email anda             : " << email << endl;
        cout << "Durasi penginapan anda selama : " << inap << " Hari" << endl;
        cout << "Total pembayaran anda menjadi : " << price.harga*inap << endl;
        cout << "Masukan Nomor Rekening Anda : ";
        cin >> norek;
        cout << endl;
        cout << "Nomor Rekening Anda Adalah : " << norek << endl;
        cout << "Total pembayaran anda menjadi : " << price.harga*inap << endl;
        cout << "Terimakasih" << endl;
        break;
    }
    }
}

void reservk(){
    int inap, piltod;
    cin.get();
    string nama, email, norek;
    vil2 price;
    price.harga = 1200000;
    cout << endl;
    system("cls");
    cout << "\t\t===============================================================================" << endl;
    cout << "\t\t====   Untuk pemesanan, silahkan memasukan data diri anda terlebih dahulu  ====" << endl;
    cout << "\t\t===============================================================================" << endl;
    cout << endl;
    cout << "Nama Lengkap : ";
    getline(cin, nama);
    cout << endl;
    cout << "Alamat email : ";
    getline(cin, email);
    cout << "\nBerapa hari anda akan menginap ?  "; 
    cin >> inap;
    cout << endl;

    system("cls");
        if (inap){
        cout << "Total pembayaran anda adalah : " << price.harga*inap << endl;
        cout << "Pilih Metode Pembayaran Anda!" << endl;
        cout << "1. Tunai/Bayar di tempat\n2. Non-Tunai" << endl;
        cout << "Pilihan Anda : ";
        cin >> piltod;

        system ("cls");
        switch (piltod){
        case 1:
        cout << "Anda Memilih Pembayaran Tunai" << endl;
        cout << "Nama Anda                     : " << nama << endl;
        cout << "Alamat email anda             : " << email << endl;
        cout << "Durasi penginapan anda selama : " << inap << "Hari" << endl;
        cout << "Total pembayaran anda menjadi : " << price.harga*inap << endl;
        cout << "Pembayaran dapat anda lakukan di resepsionis villa kami" << endl;
        cout << "Terimakasih" << endl;
        break;

        case 2:
        cout << "Anda Memilih Pembayaran Non-Tunai" << endl;
        cout << "Nama Anda                     : " << nama << endl;
        cout << "Alamat email anda             : " << email << endl;
        cout << "Durasi penginapan anda selama : " << inap << " Hari" << endl;
        cout << "Total pembayaran anda menjadi : " << price.harga*inap << endl;
        cout << "Masukan Nomor Rekening Anda : ";
        cin >> norek;
        cout << endl;
        cout << "Nomor Rekening Anda Adalah : " << norek << endl;
        cout << "Total pembayaran anda menjadi : " << price.harga*inap << endl;
        cout << "Terimakasih" << endl;
        break;
    }
    }
}

void reserva(){
    int inap, piltod;
    cin.get();
    string nama, email, norek;
    vil2 price;
    price.harga = 2000000;
    cout << endl;
    system("cls");
    cout << "\t\t===============================================================================" << endl;
    cout << "\t\t====   Untuk pemesanan, silahkan memasukan data diri anda terlebih dahulu  ====" << endl;
    cout << "\t\t===============================================================================" << endl;
    cout << endl;
    cout << "Nama Lengkap : ";
    getline(cin, nama);
    cout << endl;
    cout << "Alamat email : ";
    getline(cin, email);
    cout << "\nBerapa hari anda akan menginap ?  "; 
    cin >> inap;
    cout << endl;

    system("cls");
        if (inap){
        cout << "Total pembayaran anda adalah : " << price.harga*inap << endl;
        cout << "Pilih Metode Pembayaran Anda!" << endl;
        cout << "1. Tunai/Bayar di tempat\n2. Non-Tunai" << endl;
        cout << "Pilihan Anda : ";
        cin >> piltod;

        system ("cls");
        switch (piltod){
        case 1:
        cout << "Anda Memilih Pembayaran Tunai" << endl;
        cout << "Nama Anda                     : " << nama << endl;
        cout << "Alamat email anda             : " << email << endl;
        cout << "Durasi penginapan anda selama : " << inap << "Hari" << endl;
        cout << "Total pembayaran anda menjadi : " << price.harga*inap << endl;
        cout << "Pembayaran dapat anda lakukan di resepsionis villa kami" << endl;
        cout << "Terimakasih" << endl;
        break;

        case 2:
        cout << "Anda Memilih Pembayaran Non-Tunai" << endl;
        cout << "Nama Anda                     : " << nama << endl;
        cout << "Alamat email anda             : " << email << endl;
        cout << "Durasi penginapan anda selama : " << inap << " Hari" << endl;
        cout << "Total pembayaran anda menjadi : " << price.harga*inap << endl;
        cout << "Masukan Nomor Rekening Anda : ";
        cin >> norek;
        cout << endl;
        cout << "Nomor Rekening Anda Adalah : " << norek << endl;
        cout << "Total pembayaran anda menjadi : " << price.harga*inap << endl;
        cout << "Terimakasih" << endl;
        break;
    }
    }
}

void reservd(){
    int inap, piltod;
    cin.get();
    string nama, email, norek;
    vil2 price;
    price.harga = 1500000;
    cout << endl;
    system("cls");
    cout << "\t\t===============================================================================" << endl;
    cout << "\t\t====   Untuk pemesanan, silahkan memasukan data diri anda terlebih dahulu  ====" << endl;
    cout << "\t\t===============================================================================" << endl;
    cout << endl;
    cout << "Nama Lengkap : ";
    getline(cin, nama);
    cout << endl;
    cout << "Alamat email : ";
    getline(cin, email);
    cout << "\nBerapa hari anda akan menginap ?  "; 
    cin >> inap;
    cout << endl;

    system("cls");
        if (inap){
        cout << "Total pembayaran anda adalah : " << price.harga*inap << endl;
        cout << "Pilih Metode Pembayaran Anda!" << endl;
        cout << "1. Tunai/Bayar di tempat\n2. Non-Tunai" << endl;
        cout << "Pilihan Anda : ";
        cin >> piltod;

        system ("cls");
        switch (piltod){
        case 1:
        cout << "Anda Memilih Pembayaran Tunai" << endl;
        cout << "Nama Anda                     : " << nama << endl;
        cout << "Alamat email anda             : " << email << endl;
        cout << "Durasi penginapan anda selama : " << inap << "Hari" << endl;
        cout << "Total pembayaran anda menjadi : " << price.harga*inap << endl;
        cout << "Pembayaran dapat anda lakukan di resepsionis villa kami" << endl;
        cout << "Terimakasih" << endl;
        break;

        case 2:
        cout << "Anda Memilih Pembayaran Non-Tunai" << endl;
        cout << "Nama Anda                     : " << nama << endl;
        cout << "Alamat email anda             : " << email << endl;
        cout << "Durasi penginapan anda selama : " << inap << " Hari" << endl;
        cout << "Total pembayaran anda menjadi : " << price.harga*inap << endl;
        cout << "Masukan Nomor Rekening Anda : ";
        cin >> norek;
        cout << endl;
        cout << "Nomor Rekening Anda Adalah : " << norek << endl;
        cout << "Total pembayaran anda menjadi : " << price.harga*inap << endl;
        cout << "Terimakasih" << endl;
        break;
    }
    }
}

void reserval(){
    int inap, piltod;
    cin.get();
    string nama, email, norek;
    vil2 price;
    price.harga = 2500000;
    cout << endl;
    system("cls");
    cout << "\t\t===============================================================================" << endl;
    cout << "\t\t====   Untuk pemesanan, silahkan memasukan data diri anda terlebih dahulu  ====" << endl;
    cout << "\t\t===============================================================================" << endl;
    cout << endl;
    cout << "Nama Lengkap : ";
    getline(cin, nama);
    cout << endl;
    cout << "Alamat email : ";
    getline(cin, email);
    cout << "\nBerapa hari anda akan menginap ?  "; 
    cin >> inap;
    cout << endl;

    system("cls");
        if (inap){
        cout << "Total pembayaran anda adalah : " << price.harga*inap << endl;
        cout << "Pilih Metode Pembayaran Anda!" << endl;
        cout << "1. Tunai/Bayar di tempat\n2. Non-Tunai" << endl;
        cout << "Pilihan Anda : ";
        cin >> piltod;

        system ("cls");
        switch (piltod){
        case 1:
        cout << "Anda Memilih Pembayaran Tunai" << endl;
        cout << "Nama Anda                     : " << nama << endl;
        cout << "Alamat email anda             : " << email << endl;
        cout << "Durasi penginapan anda selama : " << inap << "Hari" << endl;
        cout << "Total pembayaran anda menjadi : " << price.harga*inap << endl;
        cout << "Pembayaran dapat anda lakukan di resepsionis villa kami" << endl;
        cout << "Terimakasih" << endl;
        break;

        case 2:
        cout << "Anda Memilih Pembayaran Non-Tunai" << endl;
        cout << "Nama Anda                     : " << nama << endl;
        cout << "Alamat email anda             : " << email << endl;
        cout << "Durasi penginapan anda selama : " << inap << " Hari" << endl;
        cout << "Total pembayaran anda menjadi : " << price.harga*inap << endl;
        cout << "Masukan Nomor Rekening Anda : ";
        cin >> norek;
        cout << endl;
        cout << "Nomor Rekening Anda Adalah : " << norek << endl;
        cout << "Total pembayaran anda menjadi : " << price.harga*inap << endl;
        cout << "Terimakasih" << endl;
        break;
    }
    }
}

void reservv(){
    int inap, piltod;
    cin.get();
    string nama, email, norek;
    vil2 price;
    price.harga = 1200000;
    cout << endl;
    system("cls");
    cout << "\t\t===============================================================================" << endl;
    cout << "\t\t====   Untuk pemesanan, silahkan memasukan data diri anda terlebih dahulu  ====" << endl;
    cout << "\t\t===============================================================================" << endl;
    cout << endl;
    cout << "Nama Lengkap : ";
    getline(cin, nama);
    cout << endl;
    cout << "Alamat email : ";
    getline(cin, email);
    cout << "\nBerapa hari anda akan menginap ?  "; 
    cin >> inap;
    cout << endl;

    system("cls");
        if (inap){
        cout << "Total pembayaran anda adalah : " << price.harga*inap << endl;
        cout << "Pilih Metode Pembayaran Anda!" << endl;
        cout << "1. Tunai/Bayar di tempat\n2. Non-Tunai" << endl;
        cout << "Pilihan Anda : ";
        cin >> piltod;

        system ("cls");
        switch (piltod){
        case 1:
        cout << "Anda Memilih Pembayaran Tunai" << endl;
        cout << "Nama Anda                     : " << nama << endl;
        cout << "Alamat email anda             : " << email << endl;
        cout << "Durasi penginapan anda selama : " << inap << "Hari" << endl;
        cout << "Total pembayaran anda menjadi : " << price.harga*inap << endl;
        cout << "Pembayaran dapat anda lakukan di resepsionis villa kami" << endl;
        cout << "Terimakasih" << endl;
        break;

        case 2:
        cout << "Anda Memilih Pembayaran Non-Tunai" << endl;
        cout << "Nama Anda                     : " << nama << endl;
        cout << "Alamat email anda             : " << email << endl;
        cout << "Durasi penginapan anda selama : " << inap << " Hari" << endl;
        cout << "Total pembayaran anda menjadi : " << price.harga*inap << endl;
        cout << "Masukan Nomor Rekening Anda : ";
        cin >> norek;
        cout << endl;
        cout << "Nomor Rekening Anda Adalah : " << norek << endl;
        cout << "Total pembayaran anda menjadi : " << price.harga*inap << endl;
        cout << "Terimakasih" << endl;
        break;
    }
    }
}

void reservs(){
    int inap, piltod;
    cin.get();
    string nama, email, norek;
    vil2 price;
    price.harga = 2000000;
    cout << endl;
    system("cls");
    cout << "\t\t===============================================================================" << endl;
    cout << "\t\t====   Untuk pemesanan, silahkan memasukan data diri anda terlebih dahulu  ====" << endl;
    cout << "\t\t===============================================================================" << endl;
    cout << endl;
    cout << "Nama Lengkap : ";
    getline(cin, nama);
    cout << endl;
    cout << "Alamat email : ";
    getline(cin, email);
    cout << "\nBerapa hari anda akan menginap ?  "; 
    cin >> inap;
    cout << endl;

    system("cls");
        if (inap){
        cout << "Total pembayaran anda adalah : " << price.harga*inap << endl;
        cout << "Pilih Metode Pembayaran Anda!" << endl;
        cout << "1. Tunai/Bayar di tempat\n2. Non-Tunai" << endl;
        cout << "Pilihan Anda : ";
        cin >> piltod;

        system ("cls");
        switch (piltod){
        case 1:
        cout << "Anda Memilih Pembayaran Tunai" << endl;
        cout << "Nama Anda                     : " << nama << endl;
        cout << "Alamat email anda             : " << email << endl;
        cout << "Durasi penginapan anda selama : " << inap << "Hari" << endl;
        cout << "Total pembayaran anda menjadi : " << price.harga*inap << endl;
        cout << "Pembayaran dapat anda lakukan di resepsionis villa kami" << endl;
        cout << "Terimakasih" << endl;
        break;

        case 2:
        cout << "Anda Memilih Pembayaran Non-Tunai" << endl;
        cout << "Nama Anda                     : " << nama << endl;
        cout << "Alamat email anda             : " << email << endl;
        cout << "Durasi penginapan anda selama : " << inap << " Hari" << endl;
        cout << "Total pembayaran anda menjadi : " << price.harga*inap << endl;
        cout << "Masukan Nomor Rekening Anda : ";
        cin >> norek;
        cout << endl;
        cout << "Nomor Rekening Anda Adalah : " << norek << endl;
        cout << "Total pembayaran anda menjadi : " << price.harga*inap << endl;
        cout << "Terimakasih" << endl;
        break;
    }
    }
}

void reservr(){
    int inap, piltod;
    cin.get();
    string nama, email, norek;
    vil2 price;
    price.harga = 1500000;
    cout << endl;
    system("cls");
    cout << "\t\t===============================================================================" << endl;
    cout << "\t\t====   Untuk pemesanan, silahkan memasukan data diri anda terlebih dahulu  ====" << endl;
    cout << "\t\t===============================================================================" << endl;
    cout << endl;
    cout << "Nama Lengkap : ";
    getline(cin, nama);
    cout << endl;
    cout << "Alamat email : ";
    getline(cin, email);
    cout << "\nBerapa hari anda akan menginap ?  "; 
    cin >> inap;
    cout << endl;

    system("cls");
        if (inap){
        cout << "Total pembayaran anda adalah : " << price.harga*inap << endl;
        cout << "Pilih Metode Pembayaran Anda!" << endl;
        cout << "1. Tunai/Bayar di tempat\n2. Non-Tunai" << endl;
        cout << "Pilihan Anda : ";
        cin >> piltod;

        system ("cls");
        switch (piltod){
        case 1:
        cout << "Anda Memilih Pembayaran Tunai" << endl;
        cout << "Nama Anda                     : " << nama << endl;
        cout << "Alamat email anda             : " << email << endl;
        cout << "Durasi penginapan anda selama : " << inap << "Hari" << endl;
        cout << "Total pembayaran anda menjadi : " << price.harga*inap << endl;
        cout << "Pembayaran dapat anda lakukan di resepsionis villa kami" << endl;
        cout << "Terimakasih" << endl;
        break;

        case 2:
        cout << "Anda Memilih Pembayaran Non-Tunai" << endl;
        cout << "Nama Anda                     : " << nama << endl;
        cout << "Alamat email anda             : " << email << endl;
        cout << "Durasi penginapan anda selama : " << inap << " Hari" << endl;
        cout << "Total pembayaran anda menjadi : " << price.harga*inap << endl;
        cout << "Masukan Nomor Rekening Anda : ";
        cin >> norek;
        cout << endl;
        cout << "Nomor Rekening Anda Adalah : " << norek << endl;
        cout << "Total pembayaran anda menjadi : " << price.harga*inap << endl;
        cout << "Terimakasih" << endl;
        break;
    }
    }
}

int main (){
    int pil, i=0, no=1;
    char back;
    vill listVilla[10];
    vil2 villa[10];
    vil2 price[10];
    
    villa[0].nama = "Villa Cemara Situgunung\n";
    villa[0].deskripsi = "Villa Cemara Situgunung adalah pilihan tepat untuk wisatawan yang mengunjungi sukabumi, karena \n\t\t  menawarkan suasana yang sesuai untuk keluarga ditambah dengan fasilitas yang tersedia dapat \n\t\t  menyempurnakan penginapan anda";
    villa[0].fasilitas = "Tv\n\t\t  Tempat tidur\n\t\t  Lemari pakaian\n\t\t  Set meja rias\n\t\t  Pemanas air\n\t\t  Kloset duduk\n\t\t  Free kopi, dan teh\n";
    price[0].harga = 1500000;

    villa[1].nama = "Villa Pelangi\n";
    villa[1].deskripsi = "Anda bisa menemukan penginapan ini di Jalan Situgunung KM 7, Kampung Pasanggrahan RT 33 RW 9, \n\t\t  Desa Gede Pangrangro, Kecamatan Kadudampit, Sukabumi. Untuk menuju Villa Cemara, sangat mudah. \n\t\t  Jika Anda bertolak dari Stasiun Cisaat, bisa menumpang angkot di depan stasiun dan turun di \n\t\t  pertigaan Polsek Cisaat. Lalu, lanjutkan perjalanan dengan angkot warna merah menuju kadudampit";
    villa[1].fasilitas = "Fasilitas Populer\n\t\t - Kolam renang outdoor\n\t\t - Sarapan\n\t\t - Wifi\n\t\t - Parkir\n\t\t - Spa\n\t\t  Kamar\n\t\t - Ac\n\t\t - Tv\n\t\t - Bak Mandi\n\t\t - Air pancur\n\t\t - Makanan & Minuman\n\t\t - Restoran\n\t\t - Sarapan\n\t\t  Layanan\n\t\t - Laundry\n\t\t";
    price[1].harga = 1800000;

    villa[2].nama = "Villa Nada Situgunung\n";
    villa[2].deskripsi = "Terletak di Cijagung dan menawarkan teras. Properti ini menawarkan akses ke balkon dan parkir pribadi\n\t\t  gratis.\n\t\t  Vila 5 kamar tidur ini memiliki ruang tamu dengan TV layar datar, dapur lengkap, dan 5 kamar mandi.\n\t\t  Bandara terdekat adalah Bandara Internasional Husein Sastranegara, 98 km dari vila.\n";
    villa[2].fasilitas = "- Parkir Gratis\n\t\t - Dapur\n\t\t - 5 Kamar mandi pribadi\n\t\t - 5 Kamar tidur\n\t\t - Tv\n\t\t - Balkon\n\t\t - Teras";
    price[2].harga = 1700000;

    villa[3].nama = "Villa Kuning\n";
    villa[3].deskripsi = "Terletak 300 Meter sebelum pintu masuk Situgunung, kadudampit. Villa Kuning Merupakan villa bernuansa keluarga\n";
    villa[3].fasilitas = "- Sarapan Pagi\n\t\t - Tiket Masuk Cinumpang dan Curug Sawer\n\t\t - 2 Kamar Mandi\n\t\t - Air minum galon, Api Unggun\n\t\t - Dapur\n\t\t - Kapasitas Maksimal 10 Orang\n";
    price[3].harga = 1200000;

    villa[4].nama = "Villa Arayya\n";
    villa[4].deskripsi = "Dulunya bernama Villa Tanpa Nama. Dengan semangat baru untuk melayani anda lebih baik lagi, kami bertransformasi menjadi Villa Arraya.\n";
    villa[4].fasilitas = "Villa Induk (2 lantai) terdiri dari :\n\t\t - 4+1 kamar tidur\n\t\t - 2 kamar mandi\n\t\t - Ruang Keluarga (Living room)\n\t\t - Ruang makan\n\t\t - Dapur\n\t\t Pondok Riung. Yaitu terdiri dari:\n\t\t - 6 kamar tidur\n\t\t - 4 kamar mandi\n\t\t - Ruang Keluarga (Living room)\n\t\t - Lesehan\n\t\t - Dapur\n";
    price[4].harga = 2000000;

    villa[5].nama = "Dtresna villa";
    villa[5].deskripsi = "Berlokasi di Jl. Situgunung, Gede Pangrango, Kec. Kadudampit, Kabupaten Sukabumi,\n\t\t ";
    villa[5].fasilitas = "2 Kamar tidur + 1 extra bed\n\t\t - Dapur + alat masak\n\t\t - Kamar mandi + water heater\n\t\t - Tv\n";
    price[5].harga = 1500000;

    villa[6].nama = "Villa Alinka\n";
    villa[6].deskripsi = "Villa Alinka merupakan villa bernuansa semi modern, dengan gaya arsitek kerajaan dongeng. Terletak di Jl. Situgunung Km.7\n";
    villa[6].fasilitas = "- 4 Kamar\n\t\t - Water Heater\n\t\t - Halaman luas\n\t\t - Parkir\n\t\t - Billyard\n\t\t - Kolam renang\n\t\t - Dapur\n";
    price[6].harga = 2500000;

    villa[7].nama = "Dzahra vilages\n";
    villa[7].deskripsi = "Villa bernuansa Pedesaan dengan 6 kamar mini.\t Berlokasi di Jl. Situgunung Km.7, Kec. Kadudampit";
    villa[7].fasilitas = "- 6 Kamar dengan 1 Kasur dan wc di dalam\n\t\t - Halaman luas\n\t\t - Tempat Parkir\n\t\t - Aula\n\t\t";
    price[7].harga = 1200000;

    villa[8].nama = "Saung Geulis";
    villa[8].deskripsi = "Nuansa Cottage dengan konsep alami dan asri, memberi keindahan, kenyamanan dan suasana berlibur\n\t\t  yang santai bagi anda dan keluarga dengan jarak tempuh hanya sekitar 120 km dari kota Jakarta\n\t\t  dan berada di ketinggian 680 m di atas permukaan laut. Nikmati perasaan beristirahat di rumah keluarga\t\t\t  sendiri.\n";
    villa[8].fasilitas = "- 14 Kamar tidur dengan 1 kamar mandi di setiap kamar\n\t\t - Dapur\n\t\t - Alat Masak\n\t\t - Parkir\n\t\t - Kolam Pemancingan Ikan";
    price[8].harga = 2000000;

    villa[9].nama = "Rumah Nenek tepi lembah\n";
    villa[9].deskripsi = "Rumah nenek tepi lembah merupakan eco wisata penginapan ditengah hutan dengan model cabin dan\n\t\t  glamping dengan menggunakan panel tenaga surya pada malam hari dan menggunakan genset sesuai\n\t\t  request dari tamu.\n";
    villa[9].fasilitas = "- Kamar mandi didalam + air panas (Water Heater)\n\t\t - Makan 3x, Air minum galon, Api Unggun\n\t\t - Dapur umum, Alat Masak, Kompor gas\n\t\t - Tiket masuk pos + Parkir\n\t\t - Tiket air terjun, Curug Sawer\n\t\t - Kapasitas 4 Orang";
    price[9].harga = 1500000;

    listVilla[0] = {"Villa Cemara Situgunung"};
    listVilla[1] = {"Villa Pelangi"};
    listVilla[2] = {"Villa Nada Situgunung"};
    listVilla[3] = {"Villa Kuning"};
    listVilla[4] = {"Villa Arayya"};
    listVilla[5] = {"Dtresna Villa"};
    listVilla[6] = {"Villa Alinka"};
    listVilla[7] = {"Dzahra Vilages"};
    listVilla[8] = {"Saung Geulis"};
    listVilla[9] = {"Rumah Nenek Tepi Lembah"};

    do{
    cout << "\t\t===================================================================================" << endl;
    cout << "\t\t==========       Program Layanan Pemesanan Villa Daerah Situgunung       ==========" << endl;
    cout << "\t\t==========                  Find Your Best Accomodation                  ==========" << endl;
    cout << "\t\t===================================================================================" << endl;
    cout << endl;
    cout << "\t\t\t\t\t\t        [1]                               " << endl;
    cout << "\t\t\t\t\t\t[Pesan Kamar Villa]\n" << endl;
    cout << "Pilih dengan Nomor\n \nNomor yang Anda Pilih adalah : "; cin >> pil;
    system("cls");

    switch(pil){
        pilVil:
        case 1:
        cout << "\t\t===============================================================================" << endl;
        cout << "\t\t==========              Daftar Villa yang Tersedia                   ==========" << endl;
        cout << "\t\t===============================================================================" << endl;
        cout << endl;
        cout << "1. " << listVilla[0].name << endl;
        cout << "2. " << listVilla[1].name << endl;
        cout << "3. " << listVilla[2].name << endl;
        cout << "4. " << listVilla[3].name << endl;
        cout << "5. " << listVilla[4].name << endl;
        cout << "6. " << listVilla[5].name << endl;
        cout << "7. " << listVilla[6].name << endl;
        cout << "8. " << listVilla[7].name << endl;
        cout << "9. " << listVilla[8].name << endl;
        cout << "10. " << listVilla[9].name << endl;

    }
        cout << endl;
        cout << "Pilih dengan nomor\n \nNomor yang Anda Pilih adalah : "; cin >> pil;

        system("cls");
        switch(pil){
            case 1:
            vCemara:
            cout << "Nama Villa \t: " << villa[0].nama << endl;
            cout << "Tentang Villa \t: " << villa[0].deskripsi << endl;
            cout << "Fasilitas Villa : " << villa[0].fasilitas << endl;
            cout << "Harga permalamnya adalah : Rp " << price[0].harga << endl;
            cout << endl;
            cout << "Tekan (k) untuk kembali (p) untuk memesan kamar dan (m) untuk lihat lokasi di peta : "; cin >> back;
            cout << endl;
            if(back =='k'){
                system("cls");
                goto pilVil;
            }
            else if (back == 'p') {
                reservc();
                break;
            }
            else if (back == 'm') {
                string p = "start https://www.google.com/maps/dir//Jl.+Kadudampit,+Gede+Pangrango,+Kec.+Kadudampit,+Kabupaten+Sukabumi,+Jawa+Barat+43153/@-6.8376623,106.8566256,12z/data=!4m8!4m7!1m0!1m5!1m1!1s0x2e684a64fe8ac10f:0xe29d6bd89540ee8d!2m2!1d106.9266662!2d-6.8376674";
                system(p.c_str());
                system("cls");
                goto vCemara;
                break;
            }

            case 2:
            vPelangi:
            cout << "Nama Villa \t: " << villa[1].nama << endl;
            cout << "Tentang Villa \t: " << villa[1].deskripsi << endl;
            cout << "Fasilitas Villa : " << villa[1].fasilitas << endl;
            cout << "Harga permalamnya adalah : Rp " << price[1].harga << endl;
            cout << endl;
            cout << "Tekan (k) untuk kembali (p) untuk memesan kamar dan (m) untuk lihat lokasi di peta : "; cin >> back;
            cout << endl;
            if(back =='k'){
                system("cls");
                goto pilVil;
            }
            else if (back == 'p') {
                reservp();
                break;
            }
            else if (back == 'm') {
                string p = "start https://www.google.com/maps/dir/-6.8468093,106.9263881/villa+pelangi+sukabumi/@-6.8423801,106.9212659,16z/data=!3m1!4b1!4m9!4m8!1m1!4e1!1m5!1m1!1s0x2e684a65a7b3e76f:0x875634619ff38c04!2m2!1d106.92716!2d-6.8382124";
                system(p.c_str());
                system("cls");
                goto vPelangi;
                break;
            }
            else {
                system("cls");
                goto vPelangi;
                break;
            }

            case 3:
            vNada:
            cout << "Nama Villa \t: " << villa[2].nama << endl;
            cout << "Tentang Villa \t: " << villa[2].deskripsi << endl;
            cout << "Fasilitas Villa : " << villa[2].fasilitas << endl;
            cout << "Harga permalamnya adalah : Rp " << price[2].harga << endl;
            cout << endl;
            cout << "Tekan (k) untuk kembali (p) untuk memesan kamar dan (m) untuk lihat lokasi di peta : "; cin >> back;
            cout << endl;
            if(back =='k'){
                system("cls");
                goto pilVil;
            }
            else if (back == 'p') {
                reservn();
                break;
            }
            else if (back == 'm') {
                string p = "start https://www.google.com/maps/dir/-6.8468751,106.9263359/villa+nada+sukabumi/@-6.8435322,106.9208671,16z/data=!3m1!4b1!4m9!4m8!1m1!4e1!1m5!1m1!1s0x2e684bc8c127335d:0x4ac9f8ec941b0ad3!2m2!1d106.9266109!2d-6.8394923";
                system(p.c_str());
                system("cls");
                goto vNada;
                break;
            }
            else {
                system("cls");
                goto vNada;
                break;
            }

            case 4:
            vKuning :
            cout << "Nama Villa \t: " << villa[3].nama << endl;
            cout << "Tentang Villa \t: " << villa[3].deskripsi << endl;
            cout << "Fasilitas Villa : " << villa[3].fasilitas << endl;
            cout << "Harga permalamnya adalah : Rp " << price[3].harga << endl;
            cout << endl;
            cout << "Tekan (k) untuk kembali (p) untuk memesan kamar (m) untuk lihat lokasi di peta : "; cin >> back;
            cout << endl;
            if(back =='k'){
                system("cls");
                goto pilVil;
            }
            else if (back == 'p') {
                reservk();
                break;
            }
            else if (back == 'm') {
                string p = "start https://www.google.com/maps/dir/-6.8468751,106.9263359/5W5G%2BCFM+Villa+Kuning,+Gede+Pangrango,+Kec.+Kadudampit,+Kabupaten+Sukabumi,+Jawa+Barat+43153/@-6.8444751,106.9229272,17z/data=!3m1!4b1!4m9!4m8!1m1!4e1!1m5!1m1!1s0x2e684bd303c1c4af:0x148bd198fcb37772!2m2!1d106.9261678!2d-6.8414123";
                system(p.c_str());
                system("cls");
                goto vKuning;
                break;
            }
            else {
                system("cls");
                goto vKuning;
                break;
            }

            case 5:
            vArayya:
            cout << "Nama Villa \t: " << villa[5].nama << endl;
            cout << "Tentang Villa \t: " << villa[5].deskripsi << endl;
            cout << "Fasilitas Villa : " << villa[5].fasilitas << endl;
            cout << "Harga permalamnya adalah : Rp " << price[5].harga << endl;
            cout << endl;
            cout << "Tekan (k) untuk kembali (p) untuk memesan kamar dan (m) untuk lihat lokasi di peta : "; cin >> back;
            cout << endl;
            if(back =='k'){
                system("cls");
                goto pilVil;
            }
            else if (back == 'p') {
                reserva();
                break;
            }
            else if (back == 'm') {
                string p = "start https://www.google.com/maps/dir/-6.8468493,106.9263416/villa+arraya/@-6.8455384,106.9229336,17z/data=!3m1!4b1!4m9!4m8!1m1!4e1!1m5!1m1!1s0x2e684bcdb2f3efd1:0x891922447259c1f2!2m2!1d106.9260037!2d-6.8437325";
                system(p.c_str());
                system("cls");
                goto vArayya;
                break;
            }
            else {
                system("cls");
                goto vArayya;
                break;
            }

            case 6:
            vDtresna:
            cout << "Nama Villa \t: " << villa[5].nama << endl;
            cout << "Tentang Villa \t: " << villa[5].deskripsi << endl;
            cout << "Fasilitas Villa : " << villa[5].fasilitas << endl;
            cout << "Harga permalamnya adalah : Rp " << price[5].harga << endl;
            cout << endl;
            cout << "Tekan (k) untuk kembali (p) untuk memesan kamar dan (m) untuk lihat lokasi di peta : "; cin >> back;
            cout << endl;
            if(back =='k'){
                system("cls");
                goto pilVil;
            }
            else if (back == 'p') {
                reservd();
                break;
            }
            else if (back == 'm') {
                string p = "start https://www.google.com/maps/dir//dtresna+villa/data=!4m6!4m5!1m1!4e2!1m2!1m1!1s0x2e684b39b6aa5cbb:0x76aabd28f0f1539?sa=X&ved=2ahUKEwiEsOeVksn8AhV5SGwGHcKiCMUQ9Rd6BAggEAQ";
                system(p.c_str());
                system("cls");
                goto vDtresna;
                break;
            }
            else {
                system("cls");
                goto vDtresna;
                break;
            }

            case 7:
            vAlinka:
            cout << "Nama Villa \t: " << villa[6].nama << endl;
            cout << "Tentang Villa \t: " << villa[6].deskripsi << endl;
            cout << "Fasilitas Villa : " << villa[6].fasilitas << endl;
            cout << "Harga permalamnya adalah : Rp " << price[6].harga << endl;
            cout << endl;
            cout << "Tekan (k) untuk kembali (p) untuk memesan kamar dan (m) untuk lihat lokasi di peta : "; cin >> back;
            cout << endl;
            if(back =='k'){
                system("cls");
                goto pilVil;
            }
            else if (back == 'p') {
                reserval();
                break;
            }
            else if (back == 'm') {
                string p = "start https://www.google.com/maps/dir//villa+alinka/data=!4m6!4m5!1m1!4e2!1m2!1m1!1s0x2e684a6dbe20d307:0xe7c96545826212bd?sa=X&ved=2ahUKEwizvM3Fksn8AhW26nMBHTX2BoMQ9Rd6BAgsEAM";
                system(p.c_str());
                system("cls");
                goto vAlinka;
                break;
            }
            else {
                system("cls");
                goto vAlinka;
                break;
            }

            case 8:
            vDzahra:
            cout << "Nama Villa \t: " << villa[7].nama << endl;
            cout << "Tentang Villa \t: " << villa[7].deskripsi << endl;
            cout << "Fasilitas Villa : " << villa[7].fasilitas << endl;
            cout << "Harga permalamnya adalah : Rp " << price[7].harga << endl;
            cout << endl;
            cout << "Tekan (k) untuk kembali (p) untuk memesan kamar dan (m) untuk lihat lokasi di peta : "; cin >> back;
            cout << endl;
            if(back =='k'){
                system("cls");
                goto pilVil;
            }
            else if (back == 'p') {
                reservv();
                break;
            }
            else if (back == 'm') {
                string p = "start https://www.google.com/maps/dir//d'zahra+village+sukabumi/data=!4m6!4m5!1m1!4e2!1m2!1m1!1s0x2e684b597fd219c9:0x9e1f5e4a2e7de1ae?sa=X&ved=2ahUKEwjevIisk8n8AhUnTmwGHQ6HCq4Q9Rd6BAgrEAM";
                system(p.c_str());
                system("cls");
                goto vDzahra;
                break;
            }
            else {
                system("cls");
                goto vDzahra;
                break;
            }

            case 9:
            vSaung:
            cout << "Nama Villa \t: " << villa[8].nama << endl;
            cout << "Tentang Villa \t: " << villa[8].deskripsi << endl;
            cout << "Fasilitas Villa : " << villa[8].fasilitas << endl;
            cout << "Harga permalamnya adalah : Rp " << price[8].harga << endl;
            cout << endl;
            cout << "Tekan (k) untuk kembali (p) untuk memesan kamar dan (m) untuk lihat lokasi di peta : "; cin >> back;
            cout << endl;
            if(back =='k'){
                system("cls");
                goto pilVil;
            }
            else if (back == 'p') {
                reservs();
                break;
            }
            else if (back == 'm') {
                string p = "start https://www.google.com/maps/dir/-6.8468751,106.9263359/saung+geulis+hotel/@-6.8664798,106.8959467,14z/data=!3m1!4b1!4m9!4m8!1m1!4e1!1m5!1m1!1s0x2e68361a75889671:0x99e0db449a50f836!2m2!1d106.9005446!2d-6.8860464";
                system(p.c_str());
                system("cls");
                goto vSaung;
                break;
            }
            else {
                system("cls");
                goto vSaung;
                break;
            }

            case 10:
            vNenek:
            cout << "Nama Villa \t: " << villa[9].nama << endl;
            cout << "Tentang Villa \t: " << villa[9].deskripsi << endl;
            cout << "Fasilitas Villa : " << villa[9].fasilitas << endl;
            cout << "Harga permalamnya adalah : Rp " << price[9].harga << endl;
            cout << endl;
            cout << "Tekan (k) untuk kembali (p) untuk memesan kamar dan (m) untuk lihat lokasi di peta : "; cin >> back;
            cout << endl;
            if(back =='k'){
                system("cls");
                goto pilVil;
            }
            else if (back == 'p') {
                reservr();
                break;
            }
            else if (back == 'm') {
                string p = "start https://www.google.com/maps/dir//rumah+nenek+tepi+lembah+sukabumi/data=!4m6!4m5!1m1!4e2!1m2!1m1!1s0x2e684b4e2661426f:0xb90927cd09cf6c5?sa=X&ved=2ahUKEwjs3qi2lMn8AhVk1HMBHR_1BgIQ9Rd6BAglEAQ";
                system(p.c_str());
                system("cls");
                goto vNenek;
                break;
            }
            else {
                system("cls");
                goto vNenek;
                break;
            }
        }

    cin.get();
    cout << "Kembali ke menu utama ? (y/t) : "; cin >> back;
    system("cls");
    } while (back == 'y');
    return 0;    
}