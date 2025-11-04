#include <iostream>
using namespace std;

int N, i;
double x, S, K, rata, varians;

int main() {
    cout << "Berapa banyak bilangan ? : "; cin >> N;

    S = 0;
    K = 0;

    for (i=1; i<=N; i++) {
        cout << "Masukan bilangan ke-" << i << " : "; cin >> x;
        S += x;
        K += x * x;
    }

    rata = S / N;
    varians = (K - S*S / N) / (N-1);

    cout << "Rata-rata = " << rata <<endl;
    cout << "Varians = " << varians <<endl;

    return 0;
}