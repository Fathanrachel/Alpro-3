#include <iostream>
using namespace std;

int main(){
    int Fathan;
    Fathan = 10;
    
    cout << "Menampilkan Bilangan Deret A kesamping" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    do
    {
        cout << " " << Fathan;
        Fathan--;
    } while (Fathan >= 1);
    cin.get();
}