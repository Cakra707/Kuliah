#include <iostream>
using namespace std;

void Baca_Larik(int M, int s[]);
void Cetak_Larik(int M, int A[]);
void Geser_Kanan(int M, int A[]);
void Geser_Kiri(int M, int A[]);

int main() {
    const int N=5;
    int A[N], pilihan;

    Baca_Larik(N,A);
    cout << "Larik sebelum digeser : ";
    Cetak_Larik(N,A);

    cout << "\nPilih salah satu : \n";
    cout << "1. Geser Kanan \n";
    cout << "2. Geser Kiri \n";
    cout << "Pilihan anda : "; cin >> pilihan;
    if (pilihan == 1 ) Geser_Kanan(N,A);
    else Geser_Kiri(N,A);

    cout << "Larik setelah digeser : ";
    Cetak_Larik(N,A);

    system("PAUSE");
    return 0;
}

void Baca_Larik(int M, int s[]) {
    int indeks;
    for (indeks = 0; indeks < M; indeks++) {
        cout << "Masukkan elemen ke-" << indeks+1 << " : ";
        cin >> s[indeks];
    }
}

void Cetak_Larik(int M, int A[]){
    int indeks;
    cout << endl << endl;
    for (indeks=0; indeks < M; indeks++) {
    cout << A[indeks] << " ";

    }
    cout << endl << endl;

}

void Geser_Kanan(int M, int A[]) {
    int indeks, temp;
    temp = A[M-1];
            //4                  
    for (indeks = M-1; indeks >= 0; indeks --) {
        A[indeks+1] = A[indeks]; 
        // a[5] = 5 , a[4] = 4, a[3]
    }
        A[0]=temp;

}
    
void Geser_Kiri(int M, int A[]) {
    int indeks, temp;
    temp = A[0];
    for (indeks=1; indeks<M; indeks++){
        A[indeks-1]=A[indeks];
    }

    A[M-1] = temp;

}