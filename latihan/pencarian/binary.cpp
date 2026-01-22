#include <iostream>
using namespace std;

int main() {
    cout <<"mod : " << 10 % 11 << endl; 
    int m = 5;
    int a[m], x=0;
    int mid = 0, bwh = 0, ats=0, i=0, d=0;
    bool k;

    while (i < m) {
        cout << "Indeks ke-" << i << " : "; cin >> a[i];
        i++;
    }
    
    ats = m-1;
    cout <<"Dicari : "; cin >> x;

    
    while (bwh <= ats) {
            mid = (ats + bwh) / 2;
            cout << "mid : " << mid << endl;
            if (x == a[mid]) {
                d = 1 ;
                break;}
            else if (x < a[mid]) ats = mid - 1;
            else bwh = mid + 1;
    }

    if (d == 1) {
        cout << "ada" << endl;
    } else cout << "tidak" << endl;

    
}