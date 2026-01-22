#include <iostream>
using namespace std;



int main() {
    /* ori
    int f=0, d =6;
    int a[d] = {1,2,5,4,3,9,8};
    int h = 2;
    
        while (f < d) {
        
            if (a[f] == 9) {
                cout << "Angka Yang Dicari ada di indeks " << f << endl; 
                h = 1; 
            }
            f++;
        }
        if (h != 1) cout << "Angka Tidak Temukan" << endl;

    */
    
    int m = 5;
    int a[m], x=0;
    int i = 0, pos;

    while (i < m) {
        cout << "Indeks ke-" << i << " : "; cin >> a[i];
        i++;
    }

    cout <<"Dicari : "; cin >> x;

    i = 0;

    while (i < m && (x != a[i])) {
        i++;
    }
    
    if (x == a[i]) {
        cout << "Posisi indeks : " << i << "; Baris Ke-" << i + 1 << endl;
    } else cout << "NULL" << endl;

}