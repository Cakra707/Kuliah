#include <iostream>

int main() {
    float a, b, c, d, luas, luasBidang1, luasBidang2;

    std::cout << "Masukan Nilai a = ";
    std::cin>>a;

     std::cout << "Masukan Nilai b = ";
    std::cin>>b;

     std::cout << "Masukan Nilai c = ";
    std::cin>>c;

     std::cout << "Masukan Nilai d = ";
    std::cin>>d;

    luasBidang1 = a * b;
    luasBidang2 = c * d;
    luas = luasBidang1 + luasBidang2;
    std::cout << "Luasnya adalah " << luas << " m2";

    return 0;
}