#include <iostream>
#include <iomanip>
using namespace std;

int noPokok, sks, jumlahMatkul, dataKe, totalSks, siswaTI, siswaMI, siswaSI, siswaBD, siswaRPL, siswaKWH, noPokokTinggiTI, noPokokRendahTI, noPokokTinggiRPL, noPokokRendahRPL;

float bobot, bobotxSks, totalBobotxSks, ip, maksIpTI = -1, minIpTI = 9, maksIpRPL = -1, minIpRPL = 9;

string nama, kodeJrsn, jurusan, namaTinggiTI, kodeMatkul, nilaiHuruf, namaRendahTI, namaTinggiRPL, namaRendahRPL, matkul, masihMatkul, masihMahasiswa;

int main () {

    while (true) {
        dataKe++;
        cout << "Masukan Data Ke "<< dataKe << " : " << endl;
        cout << "No. Pokok                  : "; cin >> noPokok;
        cout << "Nama                       : "; cin.ignore(); getline(cin, nama);
        cout << "Kode (TI/SI/MI/RPL/BD/KWH) : "; cin >> kodeJrsn;

         if (kodeJrsn == "TI") {
            jurusan = "Teknik Informatika";
            siswaTI++;
         } else if (kodeJrsn == "SI") {
             jurusan = "Sistem Informasi";
             siswaSI++;
         }  else if (kodeJrsn == "MI") {
            jurusan = "Manajemen Informatika";
            siswaMI++;
         }  else if (kodeJrsn == "RPL") {
             jurusan = "Rekayasa Perangkat Lunak";
             siswaRPL++;
         }  else if (kodeJrsn == "BD") {
            jurusan = "Bisnis Digital";
            siswaBD++;
         } else if (kodeJrsn == "KWH") {
            jurusan = "Kewirausahaan";
            siswaKWH++;
         } else {
            cout << "\nMasukan kode yang sesuai!" << endl <<endl;
            dataKe--;
            continue;
         }
        cout << setw(35) <<"Jurusan                    : " << jurusan << endl <<endl;

        totalBobotxSks = 0;
        totalSks = 0;
        jumlahMatkul = 0;
        
        while (true) {
            jumlahMatkul++;
            cout << "Masukan Data Matakuliah :" <<endl;
            cout << "Kode                : "; cin >> kodeMatkul;
            cout << "Nama                : "; cin.ignore(); getline(cin, matkul);
            cout << "Sks                 : "; cin >> sks;
            cout << "Nilai huruf         : "; cin >> nilaiHuruf;

            if (nilaiHuruf == "A") bobot = 4.00;
                else if (nilaiHuruf == "A-") bobot = 3.67;
                else if (nilaiHuruf == "B+") bobot = 3.33;
                else if (nilaiHuruf == "B") bobot = 3.00;
                else if (nilaiHuruf == "B-") bobot = 2.67;
                else if (nilaiHuruf == "C+") bobot = 2.33;
                else if (nilaiHuruf == "C") bobot = 2.00;
                else if (nilaiHuruf == "D") bobot = 1.00;
                else if (nilaiHuruf == "E") bobot = 0;
                else {
                    cout <<"\nMasukan nilai huruf yang sesuai [A,A-,B+,B,B-,C,C+,D,E]!" <<endl <<endl;
                    continue;
                }

            cout << fixed << setprecision(2);
            cout << "\n";
            cout << "Bobot               : " << bobot << endl;
            bobotxSks = bobot * sks;

            cout << "Bobot x SKS         : " << bobotxSks << endl;
            
            totalSks += sks;
            totalBobotxSks += bobotxSks;
            
            cout << "Total SKS           : " << totalSks << endl;
                if (totalSks == 0 ) {
                    cout << "\nTotal SKS tidak boleh nol(0)!" <<endl <<endl;
                    jumlahMatkul--;
                    continue;
                }
            cout << "Total Bobot x SKS   : " << totalBobotxSks <<endl <<endl;

            ip = totalBobotxSks / totalSks;

            cout << "Masih ada Matakuliah [y/t]  : "; cin >> masihMatkul;
            if (masihMatkul != "y") break;

        }
           
            cout << "\nJumlah matkul        : " << jumlahMatkul <<endl;
            cout << "Index Prestasi       : " << ip <<endl <<endl;

        if (jurusan == "Teknik Informatika") {
            if (ip > maksIpTI) {
                maksIpTI = ip;
                noPokokTinggiTI = noPokok;
                namaTinggiTI = nama;
            }
            if (ip < minIpTI) {
                minIpTI = ip;
                noPokokRendahTI = noPokok;
                namaRendahTI = nama;
            }
        } 

        if (jurusan == "Rekayasa Perangkat Lunak") {
            if (ip > maksIpRPL) {
                maksIpRPL = ip;
                noPokokTinggiRPL = noPokok;
                namaTinggiRPL = nama;
            } 
            if (ip < minIpRPL) {
                minIpRPL = ip;
                noPokokRendahRPL = noPokok;
                namaRendahRPL = nama;
            }
        }

        cout << "Masih ada mahasiswa lain [y/t]: "; cin >> masihMahasiswa;
        if (masihMahasiswa != "y") break;
    }

    cout << "\nJumlah Mahasiswa TEKNIK INFORMATIKA        : " << siswaTI << endl;
    if (siswaTI > 0) {
        cout << "Indeks Prestasi tertinggi                  : " << maksIpTI << endl;
        cout << "No. Pokok                                  : " << noPokokTinggiTI << endl;
        cout << "Nama                                       : " << namaTinggiTI << endl <<endl;
        cout << "Indeks Prestasi terendah                   : " << minIpTI << endl;
        cout << "No. Pokok                                  : " <<  noPokokRendahTI << endl;
        cout << "Nama                                       : " << namaRendahTI << endl <<endl;
    } else cout << "Tidak ada data Indeks Prestasi untuk jurusan ini" << endl <<endl;
    
    cout << "\nJumlah Mahasiswa REKAYASA PERANGKAT LUNAK  : " << siswaRPL << endl;
    if (siswaRPL > 0) {
        cout << "Indeks Prestasi tertinggi                  : " << maksIpRPL << endl;
        cout << "No. Pokok                                  : " << noPokokTinggiRPL << endl;
        cout << "Nama                                       : " << namaTinggiRPL << endl <<endl;
        cout << "Indeks Prestasi terendah                   : " << minIpRPL << endl;
        cout << "No. Pokok                                  : " << noPokokRendahRPL << endl;
        cout << "Nama                                       : " << namaRendahRPL << endl <<endl;
    } else cout << "Tidak ada data Indeks Prestasi untuk jurusan ini" << endl <<endl;
   
    cout << "Jumlah Mahasiswa SISTEM INFORMASI          : " << siswaSI << endl;
    cout << "Jumlah Mahasiswa BISNIS DIGITAL            : " << siswaBD << endl;
    cout << "Jumlah Mahasiswa KEWIRAUSAHAAN             : " << siswaKWH << endl;
    cout << "Jumlah Mahasiswa MANAJEMEN INFORMATIKA     : " << siswaMI << endl <<endl;

    cout << "Total Jumlah Mahasiswa                     : "
         << siswaTI + siswaRPL + siswaSI + siswaBD + siswaKWH + siswaMI << endl; 

    return 0;
}