#include <iostream>
using namespace std;

int main() {
    
    int m = 5;
    int a[m+1], x = 0;
    int i = 0, pos;

    while (i < m) {
        cout << "Indeks ke-" << i << " : "; cin >> a[i];
        i++;
    }

    cout <<"Dicari : "; cin >> x;
    a[m+1] = x;
    
    i = 0;
    while (x != a[i]) i++;
    
    if (i < (m+1)) {
        cout << "Posisi indeks : " << i << "; Baris Ke-" << i + 1 << endl;
    } else cout << "NULL" << endl;
    
} 

