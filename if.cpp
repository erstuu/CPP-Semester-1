#include <iostream>
using namespace std;

int main () 
{ 
  int total_belanja;
  
  cout << "Total Belanja : ";
  cin >> total_belanja;
  
  if (total_belanja > 500000) {
    cout << "Selamat anda mendapatkan voucher belanja seharga 100000";
  } else if (total_belanja > 250000) {
    cout << "Selamat anda mendapatkan voucher belanja seharga 50000";
  } else {
    cout << "Maaf total belanja anda kurang dari 250000";
  }
  return 0;
}