#include <iostream>
using namespace std;

int N, cacah, k;
double s;

int main () {
    cout << "Berapa banyak suku ? = "; cin >> N;
    s = 1;
    cacah = 1;
    k = 0;              

    while (cacah <= N ) {
        cacah++;
        k +=2;

        if (cacah % 2 == 0) s = s - 1/float(k);
        else s = s + 1/float(k);
    }

    cout << "Jumlah deret = " << s << endl;
}