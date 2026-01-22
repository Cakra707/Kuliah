//program untuk melakukan operasi pada matriks seperti penggabungan, pemisahan, penjumlahan, perkalian, dan transpose
#include <iostream>
using namespace std;

const int maks = 50;
int A[maks][maks], B[maks][maks], C[maks][maks];
int brsA, kolA, brsB, kolB, brsC, kolC;

void inputM(int a[][maks], int &brs, int &kol, string jns, bool cek = true) {
    if (cek) cout << "\nInput Matriks " << jns << endl;
    cout << "Masukan Jumlah Baris  : "; cin >> brs;
    cout << "Masukan Jumlah Kolom  : "; cin >> kol;

    if(cek){
        for(int i=0; i < brs; i++){
            for(int j=0; j < kol; j++){
                cout << "[" << i << "][" << j << "] = ";
                cin >> a[i][j];
            }
        }
    }
}

void cetakM(int a[][maks], int brs, int kol, string pesan, string jns, bool cek = true) {
    if (jns != "") cout << "\nMatriks sebelum " << jns << " : " << endl;

    cout << "\n" << pesan << endl;
    for(int i=0; i<brs; i++){
        for(int j=0; j<kol; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
     if (!cek) system("pause");
}

void gabung(){
   
    inputM(A, brsA, kolA, "A");
    inputM(B, brsB, kolB, "B");
    cetakM(A, brsA, kolA, "Matriks A", "Penggabungan");
    cetakM(B, brsB, kolB, "Matriks B", "");

    if(kolA != kolB){
        cout << "\nJumlah kolom kedua Matriks harus sama untuk penggabungan. Ulangi!" << endl;
        system("pause");
    } else {
        for(int i=0; i<brsA; i++)
            for(int j=0; j<kolA; j++)
                C[i][j] = A[i][j];

        for(int i=0; i<brsB; i++)
            for(int j=0; j<kolB; j++)
                C[i+brsA][j] = B[i][j];

        cetakM(C, brsA+brsB, kolA, "Hasil Gabungan :", "", false);
    }
}

void pisah(){

    inputM(A, brsA, kolA, "A (Matriks yang akan dipisah)");
    cetakM(A, brsA, kolA, "Matriks A", "Pemisahan");

    cout << "Ukuran Matriks B (sisanya di Matriks C)" << endl;
    inputM(B, brsB, kolB, "", false);

    if(brsB != brsA || kolB >= kolA){
        cout << "\nJumlah baris kedua Matriks harus sama untuk pemisahan. Ulangi!" << endl;
        system("pause");
    } else {
        for(int i=0; i<brsA; i++)
            for(int j=0; j<kolA; j++)
                B[i][j] = A[i][j];

        for(int i=0; i< brsA; i++)
            for(int j=0; j < kolA-kolB; j++)
                C[i][j] = A[i][j+kolB];
        
        cout << "\nHasil Pemisahan :" << endl;
        cetakM(B, brsB, kolB, "Matriks B", "");
        cetakM(C, brsA, kolA - kolB, "Matriks C", "", false);
    
    }
}

void jumlah(){
   
    inputM(A, brsA, kolA, "A");
    inputM(B, brsB, kolB, "B");
    cetakM(A, brsA, kolA, "Matriks A", "Penjumlahan");
    cetakM(B, brsB, kolB, "Matriks B", "");

    if(brsA != brsB || kolA != kolB){
        cout << "Jumlah baris dan kolom Kedua Matriks harus sama untuk penjumlahan. Ulangi!" << endl;
        system("pause");
    } else {
        for(int i=0; i<brsA;i++)
            for(int j=0; j<kolA; j++)
                C[i][j] = A[i][j] + B[i][j];
        cetakM(C, brsA, kolA, "Hasil Penjumlahan :", "", false);
    }
}

void kali(){
   
    inputM(A, brsA, kolA, "A");
    inputM(B, brsB, kolB, "B");
    cetakM(A, brsA, kolA, "Matriks A", "Perkalian");
    cetakM(B, brsB, kolB, "Matriks B", "");

    if(kolA != brsB){
        cout << "\nJumlah baris Matriks A dan kolom Matriks B harus sama untuk perkalian. Ulangi!" << endl;
        system("pause");

    } else {
        for(int i=0; i<brsA; i++){
            for(int j=0; j<kolB; j++){
                C[i][j] = 0;
                for(int k=0; k<kolA; k++){
                    C[i][j] += A[i][k] * B[k][j];
                }
            }
        }
        cetakM(C, brsA, kolB, "Hasil Perkalian :", "", false);
    }
}

void transpose(){
    inputM(A, brsA, kolA, "A");
    cetakM(A, brsA, kolA, "Matriks A", "Transpose");

    for(int i=0;i<brsA;i++)
        for(int j=0;j<kolA;j++)
            C[j][i] = A[i][j];

    cetakM(C, kolA, brsA, "Hasil Transpose :", "", false);
}

int main(){
    int pil;
    do{
        system("cls");
        cout << "\nMenu Operasi" << endl;
        cout << "1. Penggabungan" << endl;
        cout << "2. Pemisahan" << endl;
        cout << "3. Penjumlahan" << endl;
        cout << "4. Perkalian" << endl;
        cout << "5. Transpose" << endl;
        cout << "0. Selesai" << endl;
        cout << "Pilih Operasi [1-0]: "; cin >> pil;

        switch(pil){
            case 1 : gabung(); break;
            case 2 : pisah(); break;
            case 3 : jumlah(); break;
            case 4 : kali(); break;
            case 5 : transpose(); break;
            case 0 : break;
            default : cout << "Pilihan tidak sesuai. Ulangi!" << endl;
            system("pause"); 
        }

    } while(pil != 0);

    cout << "Program selesai." << endl;
    return 0;
}