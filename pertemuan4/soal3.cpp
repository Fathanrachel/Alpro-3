#include <iostream>
using namespace std;

int main() {
    char pilihanUtama;
    float LuasS4, KllS4, LuasS3, KllS3, panjang, lebar, tinggi, alas, sisi1, sisi2, sisi3;

    do {
        // Menampilkan menu utama
        cout << "Menu Utama:" << endl;
        cout << "A. Segiempat" << endl;
        cout << "B. Segitiga" << endl;
        cout << "C. Keluar Program" << endl;
        cout << "Pilih menu (A/B/C): ";
        cin >> pilihanUtama;
        cout << endl;

        switch (pilihanUtama) {
            case 'A':
            case 'a': {
                int pilihanSegiempat;

                do {
                    // Menampilkan submenu Segiempat
                    cout << "Menu Segiempat:" << endl;
                    cout << "1. Luas Segiempat" << endl;
                    cout << "2. Keliling Segiempat" << endl;
                    cout << "3. Kembali Ke Menu Utama" << endl;
                    cout << "Pilih menu (1/2/3): ";
                    cin >> pilihanSegiempat;
                    cout << endl;
                    switch (pilihanSegiempat) {
                        case 1:
                            cout << "Masukkan panjang: ";
                            cin >> panjang;
                            cout << "Masukkan lebar: ";
                            cin >> lebar;
                            LuasS4 = panjang * lebar;
                            cout << "Luas Segiempat: " << LuasS4 << endl;
                            cout << endl;
                            break;
                        case 2:
                            cout << "Masukkan panjang: ";
                            cin >> panjang;
                            cout << "Masukkan lebar: ";
                            cin >> lebar;
                            KllS4 = 2 * (panjang + lebar);
                            cout << "Keliling Segiempat: " << KllS4 << endl;
                            cout << endl;
                            break;
                        case 3:
                            break;
                        default:
                            cout << "Pilihan tidak valid." << endl;
                            cout << endl;
                    }
                } while (pilihanSegiempat != 3);
                break;
            }

            case 'B':
            case 'b': {
                int pilihanSegitiga;

                do {
                    // Menampilkan submenu Segitiga
                    cout << "Menu Segitiga:" << endl;
                    cout << "1. Luas Segitiga" << endl;
                    cout << "2. Keliling Segitiga" << endl;
                    cout << "3. Kembali Ke Menu Utama" << endl;
                    cout << "Pilih menu (1/2/3): ";
                    cin >> pilihanSegitiga;
                    cout << endl;

                    switch (pilihanSegitiga) {
                        case 1:
                            cout << "Masukkan alas: ";
                            cin >> alas;
                            cout << "Masukkan tinggi: ";
                            cin >> tinggi;
                            LuasS3 = 0.5 * alas * tinggi;
                            cout << "Luas Segitiga: " << LuasS3 << endl;
                            cout << endl;
                            break;
                        case 2:
                            cout << "Masukkan panjang sisi 1: ";
                            cin >> sisi1;
                            cout << "Masukkan panjang sisi 2: ";
                            cin >> sisi2;
                            cout << "Masukkan panjang sisi 3: ";
                            cin >> sisi3;
                            KllS3 = sisi1 + sisi2 + sisi3;
                            cout << "Keliling Segitiga: " << KllS3 << endl;
                            cout << endl;
                            break;
                        case 3:
                            break;
                        default:
                            cout << "Pilihan tidak valid." << endl;
                            cout << endl;
                    }
                } while (pilihanSegitiga != 3);
                break;
            }
            case 'C':
            case 'c':
                cout << "Terima kasih telah menggunakan program ini. Selamat tinggal!" << endl;
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
                cout << endl;
        }
    } while (pilihanUtama != 'C' && pilihanUtama != 'c');

    return 0;
}
