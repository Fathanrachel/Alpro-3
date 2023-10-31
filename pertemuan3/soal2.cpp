#include <iostream>
using namespace std;

int main(){
    int Bilangan_Fathan;

    cout << "Menampilkan Bilangan Genap" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << endl;
    cout << "Masukkan Bilangan = "; cin >> Bilangan_Fathan;
    cout << endl;
    if(Bilangan_Fathan %2 == 0){
        cout << "Bilangan Genap" << endl;
    }
    cin.get();
}