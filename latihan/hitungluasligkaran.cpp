#include <iostream>
using namespace std;
int main()
{
    const float phi = 3.14152;
    
    float jari_jari, luas;
        
    cout << "Masukkan jari-jari lingkaran : ";
    cin >> jari_jari;
    luas = phi * jari_jari * jari_jari;
    cout << "Luas = " << luas << '\n';
    return 0;
}
