#include <iostream>
using namespace std;
int main()
{
    int cacah, N, angka, jumlah;
    float Rata;
        
    // memasukkan data
    cout << "Masukkan berapa bilangan : ";
    cin >> N;
    jumlah = 0;
    for (cacah=1; cacah<=N; cacah++) {
       // baca data satu persatu
       cout << "Masukkan bilangan ke-" << cacah << " : "; cin >> angka;
       jumlah = jumlah + angka;
    }
    Rata = float(jumlah) / float(N);
    cout << "Rata-rata = " << Rata << '\n';
}
