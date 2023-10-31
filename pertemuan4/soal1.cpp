#include <iostream>
using namespace std;

int main (){
 int x;
  cout << "======== PENAMPILAN HARI-HARI =========" << endl;
  cout << endl;
  cout << "Masukkan Angka [0-6]: ";
  cin >> x;

  switch(x){
    case 0 : cout << "Minggu";
    break;
    case 1 : cout << "Senin";
    break;
    case 2 : cout << "Selasa";
    break;
    case 3 : cout << "Rabu";
    break;
    case 4 : cout << "kamis";
    break;
    case 5 : cout << "Jum'at";
    break;
    case 6 : cout << "Sabtu";
    break;
    default: cout << "Hari tidak valid";
    
  }
}