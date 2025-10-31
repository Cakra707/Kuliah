#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int noPokok = 0, sks = 0, jumlahMatkul = 0, dataKe = 0, totalSks = 0;
    int siswaTI = 0, siswaMI = 0, siswaSI = 0, siswaBD = 0, siswaRPL = 0, siswaKWH = 0;
    int noPokokTinggiIT = 0, noPokokRendahIT = 0, noPokokTinggiRPL = 0, noPokokRendahRPL = 0;

    float bobot = 0.0f, bobotxSks = 0.0f, totalBobotxSks = 0.0f, ip = 0.0f;
    float maksIPIT = -1.0f, minIPIT = 9.0f, maksIPRPL = -1.0f, minIPRPL = 9.0f;

    string nama, namaTinggiIT, namaRendahIT, namaTinggiRPL, namaRendahRPL;
    string matkul, masihMatkul, masihMahasiswa, kodeJrsn, jurusan, nilaiHuruf, kodeMatkul;

    cout << fixed << setprecision(2);
    cout << "==============================================\n";
    cout << "        PROGRAM INPUT DATA NILAI MAHASISWA\n";
    cout << "==============================================\n\n";

    while (true) {
        dataKe++;
        cout << "Masukkan Data ke-" << dataKe << " :\n";
        cout << "No. Pokok                : "; cin >> noPokok;
        cout << "Nama                     : "; getline(cin >> ws, nama);
        cout << "Kode [TI/SI/MI/RPL/BD/KWH]: "; cin >> kodeJrsn;
        for (char &c : kodeJrsn) c = toupper(c);

        if (kodeJrsn == "TI") { jurusan = "Teknik Informatika"; siswaTI++; }
        else if (kodeJrsn == "SI") { jurusan = "Sistem Informasi"; siswaSI++; }
        else if (kodeJrsn == "MI") { jurusan = "Manajemen Informatika"; siswaMI++; }
        else if (kodeJrsn == "RPL") { jurusan = "Rekayasa Perangkat Lunak"; siswaRPL++; }
        else if (kodeJrsn == "BD") { jurusan = "Bisnis Digital"; siswaBD++; }
        else if (kodeJrsn == "KWH") { jurusan = "Kewirausahaan"; siswaKWH++; }
        else { cout << "Kode jurusan tidak valid!\n\n"; dataKe--; continue; }

        cout << "Jurusan                  : " << jurusan << "\n\n";

        totalBobotxSks = 0; totalSks = 0; jumlahMatkul = 0;

        while (true) {
            jumlahMatkul++;
            cout << "   Masukkan Data Mata Kuliah ke-" << jumlahMatkul << " :\n";
            cout << "   Kode               : "; cin >> kodeMatkul;
            cout << "   Nama               : "; getline(cin >> ws, matkul);
            do {
                cout << "   SKS                : "; cin >> sks;
                if (sks <= 0) cout << "   [!] SKS harus > 0.\n";
            } while (sks <= 0);
            cout << "   Nilai Huruf        : "; cin >> nilaiHuruf;
            for (char &c : nilaiHuruf) c = toupper(c);

            if      (nilaiHuruf == "A")  bobot = 4.00f;
            else if (nilaiHuruf == "A-") bobot = 3.67f;
            else if (nilaiHuruf == "B+") bobot = 3.33f;
            else if (nilaiHuruf == "B")  bobot = 3.00f;
            else if (nilaiHuruf == "B-") bobot = 2.67f;
            else if (nilaiHuruf == "C+") bobot = 2.33f;
            else if (nilaiHuruf == "C")  bobot = 2.00f;
            else if (nilaiHuruf == "D")  bobot = 1.00f;
            else if (nilaiHuruf == "E")  bobot = 0.00f;
            else                          bobot = 0.00f;

            bobotxSks = bobot * sks;
            totalBobotxSks += bobotxSks;
            totalSks += sks;

            cout << "      Bobot           : " << setw(5) << bobot << "\n";
            cout << "      Bobot x SKS     : " << setw(5) << bobotxSks << "\n";
            cout << "      Total SKS       : " << setw(5) << totalSks << "\n";
            cout << "      Total BobotxSKS : " << setw(5) << totalBobotxSks << "\n\n";

            cout << "   Masih ada Mata Kuliah? [y/t] : ";
            cin >> masihMatkul;
            if (masihMatkul != "y" && masihMatkul != "Y") break;
            cout << "\n";
        }

        ip = (totalSks > 0) ? totalBobotxSks / totalSks : 0;
        cout << "   Jumlah Matakuliah  : " << jumlahMatkul << "\n";
        cout << "   Indeks Prestasi(IP): " << ip << "\n";
        cout << "----------------------------------------------\n\n";

        if (jurusan == "Teknik Informatika") {
            if (ip > maksIPIT) { maksIPIT = ip; noPokokTinggiIT = noPokok; namaTinggiIT = nama; }
            if (ip < minIPIT) { minIPIT = ip; noPokokRendahIT = noPokok; namaRendahIT = nama; }
        }
        if (jurusan == "Rekayasa Perangkat Lunak") {
            if (ip > maksIPRPL) { maksIPRPL = ip; noPokokTinggiRPL = noPokok; namaTinggiRPL = nama; }
            if (ip < minIPRPL) { minIPRPL = ip; noPokokRendahRPL = noPokok; namaRendahRPL = nama; }
        }

        cout << "Masih ada mahasiswa lain? [y/t] : ";
        cin >> masihMahasiswa;
        cout << "----------------------------------------------\n\n";
        if (masihMahasiswa != "y" && masihMahasiswa != "Y") break;
    }

    cout << "\n==============================================\n";
    cout << "            REKAPITULASI NILAI MAHASISWA\n";
    cout << "==============================================\n\n";

    cout << "Jumlah Mahasiswa TEKNIK INFORMATIKA : " << siswaTI << "\n";
    if (siswaTI > 0) {
        cout << "   Indeks Prestasi tertinggi : " << maksIPIT << "\n";
        cout << "      No. Pokok : " << noPokokTinggiIT << "\n";
        cout << "      Nama      : " << namaTinggiIT << "\n";
        cout << "   Indeks Prestasi terendah  : " << minIPIT << "\n";
        cout << "      No. Pokok : " << noPokokRendahIT << "\n";
        cout << "      Nama      : " << namaRendahIT << "\n\n";
    } else cout << "   Belum ada data mahasiswa TI.\n\n";

    cout << "Jumlah Mahasiswa REKAYASA PERANGKAT LUNAK : " << siswaRPL << "\n";
    if (siswaRPL > 0) {
        cout << "   Indeks Prestasi tertinggi : " << maksIPRPL << "\n";
        cout << "      No. Pokok : " << noPokokTinggiRPL << "\n";
        cout << "      Nama      : " << namaTinggiRPL << "\n";
        cout << "   Indeks Prestasi terendah  : " << minIPRPL << "\n";
        cout << "      No. Pokok : " << noPokokRendahRPL << "\n";
        cout << "      Nama      : " << namaRendahRPL << "\n\n";
    } else cout << "   Belum ada data mahasiswa RPL.\n\n";

    cout << "Jumlah Mahasiswa SISTEM INFORMASI          : " << siswaSI << "\n";
    cout << "Jumlah Mahasiswa BISNIS DIGITAL            : " << siswaBD << "\n";
    cout << "Jumlah Mahasiswa KEWIRAUSAHAAN             : " << siswaKWH << "\n";
    cout << "Jumlah Mahasiswa MANAJEMEN INFORMATIKA     : " << siswaMI << "\n";
    cout << "----------------------------------------------\n";
    cout << "Total Jumlah Mahasiswa                     : "
         << (siswaTI + siswaRPL + siswaSI + siswaBD + siswaKWH + siswaMI) << "\n";
    cout << "==============================================\n";

    return 0;
}