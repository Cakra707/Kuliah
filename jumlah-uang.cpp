#include <iostream>
using namespace std;

int jumlahUang, seratusRb, limaPuluhRb, duaPuluhRb, sepuluhRb, limaRb, duaRb, satuRb, limaRatusRp, duaRatusRp, seratusRp; 

main()
{
   cout << "Masukan Jumlah Uang    : "; 
        cin >> jumlahUang;

    seratusRb = jumlahUang / 100000;
        jumlahUang %= 100000;

    limaPuluhRb = jumlahUang / 50000;
        jumlahUang %= 50000;

    duaPuluhRb = jumlahUang / 20000;
        jumlahUang %= 20000;

    sepuluhRb = jumlahUang / 10000;
        jumlahUang %= 10000;

    limaRb = jumlahUang / 5000;
        jumlahUang %= 5000;

    duaRb = jumlahUang / 2000;
        jumlahUang %= 2000;

    satuRb = jumlahUang / 1000;
        jumlahUang %= 1000;

    limaRatusRp = jumlahUang / 500;
        jumlahUang %= 500;

    duaRatusRp = jumlahUang / 200;
        jumlahUang %= 200;

    seratusRp = jumlahUang / 100;
        jumlahUang %= 100;

   

    cout << "\nPecahan Rp100.000    = " << seratusRb << " Lembar" << endl;
    cout << "Pecahan Rp50.000     = " << limaPuluhRb << " Lembar" <<endl;
    cout << "Pecahan Rp20.000     = " << duaPuluhRb << " Lembar" <<endl;
    cout << "Pecahan Rp10.000     = " << sepuluhRb << " Lembar" <<endl;
    cout << "Pecahan Rp5.000      = " << limaRb << " Lembar" <<endl;
    cout << "Pecahan Rp2.000      = " << duaRb << " Lembar" <<endl;
    cout << "Pecahan Rp1.000      = " << satuRb << " Lembar" <<endl;
    cout << "Pecahan Rp500        = " << limaRatusRp << " Lembar" <<endl;
    cout << "Pecahan Rp200        = " << duaRatusRp << " Lembar" <<endl;
    cout << "Pecahan Rp100        = " << seratusRp << " Lembar" <<endl;
    
    cout << "\nTotal jumlah lembaran  = " << seratusRb + limaPuluhRb + duaPuluhRb + sepuluhRb + limaRb + duaRb + satuRb << " Lembar" <<endl;
    cout << "Total jumlah koin      = " << limaRatusRp + duaRatusRp + seratusRp << " Lembar" <<endl;


return 0;
}