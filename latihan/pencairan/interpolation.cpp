#include <iostream>
using namespace std;    


int bwh, ats, i;
bool k;

int main () {

    int m = 5;
    int a[m], x=0;


    while (bwh < m) {
        cout << "Indeks ke-" << bwh << " : "; cin >> a[bwh];
        bwh++;
    }
    
    ats = m - 1;
    cout <<"Dicari : "; cin >> x;

    k = false;
    bwh = 0;
    
    while (!k && (bwh <= ats)) {
        i = bwh + ((x-a[bwh]) / (a[ats] - a[bwh])) * (ats - bwh);
        if (x == a[i]) k = true;
        else if (x < a[i]) ats = i - 1;
        else bwh = i + 1; 
    }

   if (k) {
        cout << "ada" << endl;
    } else cout << "tidak" << endl;

}