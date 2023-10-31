#include <iostream>
using namespace std;

int main(){
    int angka;
    cout << " RUMAH MAKAN SHALERO " << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "Silahkan Pilih Menu Mulai dari 1/2/3/4" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << endl;
    cout << "Menu 1 : Nasi Goreng dengan harga Rp. 5.000,-" << endl;
    cout << "Menu 2 : Gado-gado dengan harga Rp. 3.500,-" << endl;
    cout << "Menu 3 : Bubur Ayam dengan harga Rp. 2.500,-" << endl;
    cout << "Menu 4 : Ayam Bakar Pedas dengan harga Rp. 7.500,-" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "SILAHKAN PILIH MENU DIATAS 1/2/3/4 : ";
    cin >> angka;
    cout << endl;
    switch (angka)
    {
    case 1:
        cout << "Menu 1 : Nasi Goreng dengan harga Rp. 5.000,-" << endl;
        break;
    case 2:
        cout << "Menu 2 : Gado-gado dengan harga Rp. 3.500,-" << endl;
        break;
    case 3:
        cout << "Menu 3 : Bubur Ayam dengan harga Rp. 2.500,-" << endl;
        break;
    case 4:
        cout << "Menu 4 : Ayam Bakar Pedas dengan harga Rp. 7.500,-" << endl;
        break;
    
    default:
        cout << "Pilihan anda salah";
        break;
    }
    cin.get();
}