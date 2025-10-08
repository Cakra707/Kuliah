//Program untuk menghitung durasi waktu kuliah
//Disclaimer : program ini cuma bisa menghitung waktu di hari yang sama
#include <iostream>
using namespace std;

int jamMulai, menitMulai, detikMulai, jamSelesai, menitSelesai, detikSelesai, durasiJam, durasimenit, durasiDetik, totalDurasi, totalDetikMulai, totalDetikSelesai ;

main() {
    cout << "Masukan Waktu Mulai Kuliah" << endl;
        cout << "Jam    : ";
        cin >> jamMulai;

        cout << "Menit  : ";
        cin >> menitMulai;

        cout << "Detik  : ";
        cin >> detikMulai;

    cout << "\nMasukan Waktu Selesai Kuliah" << endl;
        cout << "Jam    : ";
        cin >> jamSelesai;

        cout << "Menit  : ";
        cin >> menitSelesai;

        cout << "Detik  : ";
        cin >> detikSelesai;

    totalDetikMulai = (jamMulai * 3600) + (menitMulai * 60) + detikMulai;

    totalDetikSelesai = (jamSelesai * 3600) + (menitSelesai * 60) + detikSelesai;

    totalDurasi = totalDetikSelesai - totalDetikMulai;

    durasiJam = totalDurasi / 3600;
    totalDurasi %= 3600;
    durasimenit = totalDurasi /60;
    totalDurasi %= 60;
    durasiDetik = totalDurasi;

    cout << "---------------------------------" << endl;
    cout << "\nDurasi Waktu Perkuliahan adalah : " << endl;
    cout << durasiJam << " jam" << endl;
    cout << durasimenit << " menit" << endl;
    cout << durasiDetik << " detik" << endl;
    
    return 0;
}