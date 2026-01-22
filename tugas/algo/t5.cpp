//program untuk mengurutkan data dengan beberapa metode
#include <iostream>
using namespace std;

const int maks = 10;
int a[maks];

void in(){
    cout << endl;
    for(int i = 0; i < maks; i++) {
        cout << "Masukkan Data ke-" << i + 1 << " : "; cin >> a[i];
    }
}

void cetak(string psn) {
    if (psn != "") cout << "\nSesudah (" << psn << ") " << endl;
    else cout << "\nSebelum" << endl;

    for(int i = 0; i < maks; i++)  cout <<a[i] << "  ";
    
    cout << endl;
    system("pause");
}

void bubble() {
    in();
    cetak("");
    for (int i =0; i < maks - 1; i++) {
        for(int j = 0; j < maks - 1 - i; j++ ) {
            if (a[j] > a[j+1]) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    cetak("Bubble Sort");
}

void insertion() {
    in();
    cetak("");
    for (int i = 1; i < maks; i++) {
        for (int j = i; j > 0 ; j--) {
                if (a[j] < a[j-1]) {
                int temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
            } 
        }
    }
    cetak("Insertion Sort");
}

void selection(){
    in();
    cetak("");

    for (int i = 0; i < maks - 1; i++) {
        int minI = i;
        for (int j = i + 1; j < maks; j++) {
            if (a[j] < a[minI]) minI = j;
        }
        int temp = a[i];
        a[i] = a[minI];
        a[minI] = temp;

    }
    cetak("Selection Sort");
}

//bagian fungsi quick sort
void partisi(int bwh, int ats) {

    int pivot = a[(bwh + ats) / 2]; 
    int i = bwh;
    int j = ats;

    while (i <= j) {
        while (a[i] < pivot) i++;
        while (a[j] > pivot) j--;

        if (i <= j) {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++; j--;  }
    }

    if (bwh < j)  partisi(bwh, j);
    if (i < ats) partisi(i, ats);
}

void quick() {
    in();
    cetak("");
    partisi(0, maks - 1);
    cetak("Quick Sort");
}

int main() {
    int pil;
    
    do {

        system("cls");
        cout << "Metode Pengurutan : " << endl;
        cout << "1. Bubble Sort  " << endl;
        cout << "2. Insertion Sort  " << endl;
        cout << "3. Selection Sort  " << endl;
        cout << "4. Quick Sort " << endl;
        cout << "0. Selesai" << endl;
        cout << "Masukan Metode Pengurutan [1/2/3/4] : "; cin >> pil; 

        switch (pil) {
            case 1 : bubble(); break;
            case 2 : insertion(); break;
            case 3 : selection(); break;
            case 4 : quick(); break;
            case 0 : break;
            default : cout << "Pilihan tidak sesuai. Ulangi!" << endl; system("pause");
        }

    } while (pil != 0);

    cout << "Program Selesai." << endl;

    return 0;
}

