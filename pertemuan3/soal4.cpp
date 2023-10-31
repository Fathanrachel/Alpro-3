#include <iostream>
using namespace std;

int main(){
    float gaji = 3500, gaji_lembur = 4000;
    int jam, lembur, ttl_gaji, gaji_akhir;

    cout << "PT Sejahtera" << endl;
    cout << "~~~~~~~~~~~~" << endl;
    cout << endl;

    cout << "Masukkan Jam kerja Anda: ";
    cin >> jam;
    cout << "~~~~~~~~~~~~" << endl;

    ttl_gaji = jam * gaji;

    if(jam > 48 ){
        gaji_akhir = gaji * 48 + ((jam - 48)* gaji_lembur);
    }
    
    cout << "Anda Mendapatkan Gaji sebesar Rp. " << gaji_akhir;
    cin.get();
}