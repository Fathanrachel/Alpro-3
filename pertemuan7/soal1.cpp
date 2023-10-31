#include <iostream>
using namespace std;

int main() {
    int n_F, awal_F = 2, tambah_F = 2 ; 
    cout << "Masukkan jumlah elemen deret: ";
    cin >> n_F;

    
    for (int i_F = 1; i_F <= n_F; i_F++) {
        cout << "Deret ke-" << i_F << " adalah: " << awal_F << endl;
        awal_F += tambah_F;
        tambah_F++;
    }

    cout << endl;

    return 0;
}
