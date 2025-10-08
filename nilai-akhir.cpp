#include <iostream>
using namespace std;

string namaSiswa;
int nilaiKeaktifan, nilaiTugas, nilaiUjian, nilaiAkhir;

main() {
    
    cout << "Masukan Nama Siswa       : ";
    cin >> namaSiswa;
    
    cout << "Masukan Nilai Keaktifan  : ";
    cin >> nilaiKeaktifan;
    
    cout << "Masukan Nilai Tugas      : ";
    cin >> nilaiTugas;
    
    cout << "Masukan Nilai Ujian      : ";
    cin >> nilaiUjian;
    
    nilaiAkhir = (nilaiKeaktifan * 0.20) + (nilaiTugas * 0.30) + (nilaiUjian * 0.50);
    
    cout << "\nNilai Akhir " << namaSiswa << " adalah     : " << nilaiAkhir;

    return 0;
}