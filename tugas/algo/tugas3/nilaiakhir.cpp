#include <iostream>
using namespace std;

int nilPert, nilTug, nilTotTug, tgsKe, preKe, nilMid, nilFinal, nilAkhir;
string nama, ket;
float nilPre;
char nilHuruf, masihSiswa;


void validasi() {
    
}


int main () {
    int noPok;

    while (true) {
    

        cout << "No. Pokok  : "; cin >> noPok;
        cout << "Nama       : "; cin.ignore(); getline(cin, nama);
        cout << "Nilai Presensi 1-15 : " << endl;
        while (preKe < 15) {
                preKe++;
            
                cout << "\tMasukan nilai presensi [1/0] ke " << preKe << " : "; cin >> nilPert;
                nilPre += nilPert;
            }

        cout << "Nilai Tugas 1-5 : " << endl;
        while (tgsKe < 5) {
                tgsKe++;
                cout << "\tMasukan nilai tugas [0-100] ke " << tgsKe << " : "; cin >> nilTug;

                nilTotTug += nilTug;
        }
        cout << "Nilai Mid : "; cin >> nilMid;
        cout << "Nilai Final : "; cin >> nilFinal;
        
        nilTotTug /= 5;
        nilPre = (nilPre / 15) * 100;
        nilAkhir = (0.1 * nilPre) + (0.2 * nilTotTug) + ( 0.3 * nilMid) + (0.4 * nilFinal);

        if (nilAkhir <= 100 && nilAkhir >= 80 ) {
            nilHuruf = 'A';
            ket = "LULUS";
        } else if (nilAkhir <= 80 && nilAkhir >= 65 ) {
            nilHuruf = 'B';
            ket = "LULUS";
        }
        
        cout << "Nilai Tugas : " << nilTotTug << endl;
        cout << "Nilai Presensi : " << nilPre << endl;
        cout << "Nilai Akhir : " << nilAkhir << endl;
        cout << "Nilai Huruf : " << nilHuruf << endl;
        cout << "Keterangan : " << ket << endl;


        cout << "Masih ada Mahasiswa? [y/t] : "; cin >> masihSiswa;
        if (masihSiswa == 't') break;
        }
}