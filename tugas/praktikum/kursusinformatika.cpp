#include <iostream>
#include <iomanip>
using namespace std;

int noReg, nilai, kodeBhs, nMaksBsc = -1, nMaksPsl = -1, nMaksC = -1, noRegTinggiBsc, noRegTinggiPsl, noRegTinggiC, jmlBsc, jmlPsl, jmlC;
string nama, bhsProgram, masihData, nmTinggiBsc, nmTinggiPsl, nmTinggiC;

int main () {
    cout << setw(30) << "PUSAT PENDIDIKAN KOMPUTER" <<endl;
    cout << setw(24) << "\"INFORMATIKA\"" << endl << endl;;

    while (true) {  
        cout << "No. Registrasi : "; cin >> noReg;
        cout << "Nama Peserta : "; cin.ignore(); getline(cin,nama);
        cout << "Piihan Bahasa Pemograman " << endl;
        cout << "\t1. Basic" << endl;
        cout << "\t2. Pascal" << endl;
        cout << "\t3. C++" << endl;
        cout << "Input Kode Bahasa [1/2/3] : "; cin >> kodeBhs;
        
        switch (kodeBhs) {
            case 1 : bhsProgram = "Basic"; jmlBsc++; break;
            case 2 : bhsProgram = "Pascal"; jmlPsl++; break;
            case 3 : bhsProgram = "C++"; jmlC++; break;
            default : cout << "MASUKAN KODE YANG SESUAI!" <<endl <<endl;
            continue;
        }
        
        cout << "Bahasa Pemograman " << bhsProgram << endl;
        cout << "Input Nilai Ujian [0-100] : "; cin >> nilai;
        if (nilai < 0 || nilai > 100) {
            cout << "MASUKAN NILAI YANG SESUAI!" << endl << endl; continue; }

        cout << "\nAda data lain? [y/t] : "; cin >> masihData;
    
        if (bhsProgram == "Basic") {
            if (nilai > nMaksBsc) {
                noRegTinggiBsc = noReg; nmTinggiBsc = nama; nMaksBsc = nilai;}
        }
        if (bhsProgram == "Pascal") {
            if (nilai > nMaksPsl) {
                noRegTinggiPsl = noReg; nmTinggiPsl = nama; nMaksPsl = nilai;}
        }
        if (bhsProgram == "C++") {
            if (nilai > nMaksC) { 
                noRegTinggiC = noReg; nmTinggiC = nama; nMaksC = nilai;}
        }   
        if (masihData != "y") break;
    }
    cout << "\n";
    cout << "Peserta Kursus dengan nilai terbaik" << endl << endl;

    cout << "Nilai Tertinggi pada Bahasa Basic : " << endl;
    cout << setw(20) <<"No. Registrasi : " << noRegTinggiBsc << endl;
    cout << setw(20) <<"Nama Peserta : " << nmTinggiBsc << endl;
    cout << setw(20) <<"Nilai Ujian : " << nMaksBsc << endl;
    cout << setw(20) <<"Jumlah Peserta : " << jmlBsc << endl << endl;

    cout << "Nilai Tertinggi pada Bahasa Pascal : " << endl;
    cout << setw(20) <<"No. Registrasi : " << noRegTinggiPsl << endl;
    cout << setw(20) <<"Nama Peserta : " << nmTinggiPsl << endl;
    cout << setw(20) <<"Nilai Ujian : " << nMaksPsl << endl;
    cout << setw(20) <<"Jumlah Peserta : " << jmlPsl << endl << endl;

    cout << "Nilai Tertinggi pada Bahasa C++ : " << endl;
    cout << setw(20) <<"No. Registrasi : " << noRegTinggiC << endl;
    cout << setw(20) <<"Nama Peserta : " << nmTinggiC << endl;
    cout << setw(20) <<"Nilai Ujian : " << nMaksC << endl;
    cout << setw(20) <<"Jumlah Peserta : " << jmlC << endl << endl;

    cout << "Total Jumlah peserta : " << jmlBsc + jmlPsl + jmlC << endl;

    return 0;
}

