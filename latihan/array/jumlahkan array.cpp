#include <iostream>
using namespace std;

int s, d;

void input(int x[]) {

    while (s < 5) {
        d++;
        cout << "Masukan bilangan ke-" << d << " : "; cin >> x[s];
        s++;
    }
    
}

int tots(int x, int y) {
    return x + y;
}

int main() {
    int bil[5], x, tot = 0, e = 0, f = 0;

    cout << "Masukan data bil bulat : " << endl;
    input(bil);

    
while (f<5) {
    tot = tots(bil[f], tot);
    f++;
}

   cout  << "Total : " << tot << endl;

   while (e < 5) {

        cout << "angka yang di input : " << bil[e] << endl;
        e++;

    }
}