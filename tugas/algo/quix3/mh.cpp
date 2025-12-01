//program untuk menentukan lulus tidaknya sejumlah mahasiswa sesuai rata rata nilai akhir mereka, lalu menampilkannya
#include <iostream>
#include <iomanip>
using namespace std;

int noPok[40];
double nilAkhir[40];
string nama[40], ket[40];

void inputData(int &i );
double cariRataRata(int i);
void lulusORtidak(double rataRata, int &lulus, int &tdkLulus, int i);
void cetakDaftar(double rataRata, int lulus, int tdkLulus, int i);

int main () {
    int indeks = 0, lulus = 0, tdkLulus = 0;
    double rataRata;
    
    inputData(indeks);

    rataRata = cariRataRata(indeks);
    
    lulusORtidak(rataRata, lulus, tdkLulus, indeks);
    
    cetakDaftar(rataRata, lulus, tdkLulus, indeks);
  
    return 0;
}

void inputData(int &i ) {
    char masihMhs;
    int a = 0;
    
    while (true) {
        a++;
        cout << "\nMasukan Data Mahasiswa Ke-" << a << " : " << endl;
        cout << "No. Pokok   : "; cin >> noPok[i];
        cout << "Nama        : "; cin.ignore(); getline(cin, nama[i]);
        cout << "Nilai Akhir : "; cin >> nilAkhir[i];
        i++;
        
        cout << "\nMasih Ada Mahasiswa [y/t] : "; cin >> masihMhs;
        if (masihMhs == 't') break; 
    }
}

double cariRataRata(int i) {
    int a = 0;
    double totNilAkhir = 0;

    while (a < i ) {
        totNilAkhir += nilAkhir[a];
        a++;
    }
      return totNilAkhir / i;
}

void lulusORtidak(double rataRata, int &lulus, int &tdkLulus, int i ) {
    int a = 0;

     while ( a < i) {
        if (nilAkhir[a] >= rataRata) 
            {ket[a] = "LULUS"; lulus++;}
        else 
            {ket[a] = "TIDAK LULUS"; tdkLulus++;}
        a++;
    }
}

void cetakDaftar(double rataRata, int lulus, int tdkLulus, int i) {
    int a =0;
    
    cout << "\nDAFTAR NILAI MAHASISWA KELAS: ALGORITMA & PEMOGRAMAN" << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "No. Pokok          Nama               Nilai Akhir        Keterangan" << endl;
    
    while (a < i) {
        
        cout << "    " <<noPok[a] <<"               "<< nama[a] <<"                      "<< nilAkhir[a] <<"               "<< ket[a] << endl;
        a++;
    }

    cout << "-----------------------------------------------------" << endl;
    cout << "Rata-rata Nilai    : " << fixed << setprecision(2) << rataRata << endl;
    cout << "Jumlah Lulus       : " << lulus << endl;
    cout << "Jumlah Tidak Lulus : " << tdkLulus << endl;
}
