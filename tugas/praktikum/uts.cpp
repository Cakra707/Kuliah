#include <iostream>
#include <iomanip>
using namespace std;

int  dataKe, jmlCBR, jmlADV, jmlSNC, ip13, galaxy, redmi;
string masihData;
double  totalByr, totalCB;

int main () {

    while (true) {
        double hrgMtr, bonusCB, kredit, jmlByrKredit, jmlByrTunai, tambahan;
        string nama, kdMtr, bonusBR, jnsBeli, jnsBonus, jnsMtr;

        dataKe++;
        cout << "\nMasukan Data Pembeli ke " << dataKe << " :"<< endl;
        cout << left << setw(34) <<"Nama" << ": "; cin.ignore(); getline(cin, nama);
        cout << left << setw(34) <<"Kode Motor" << ": "; cin >> kdMtr;

        if (kdMtr == "CBR") {
            jnsMtr = "CBR-250 RR";
            hrgMtr = 67000000;
            bonusBR = "Iphone 13";
            jmlCBR++;

        } else if (kdMtr == "ADV") {
            jnsMtr = "ADV-160 CBS";
            hrgMtr = 37850000;
            bonusBR = "Galaxy Tab S10";
            jmlADV++;

        } else if (kdMtr == "Snc") {
            jnsMtr = "Sonic 150R";
            hrgMtr = 28900000;
            bonusBR = "REDMI Note 14";
            jmlSNC++;
        }
        else {
            cout << "\nMASUKAN KODE MOTOR YANG SESUAI!" << endl << endl;
            dataKe--;
            continue;
        }

        cout << left << setw(34) <<"Jenis Pembelian [TUNAI/KREDIT]" << ": "; cin >> jnsBeli;
        if (jnsBeli == "TUNAI") 
           {cout << left << setw(34) <<"Jenis Bonus [BARANG/CASHBACK]" << ": "; cin >> jnsBonus;} 

    
        if (jnsBonus == "CASHBACK") {
            if(kdMtr == "CBR") bonusCB = 8999000;
            else if (kdMtr == "ADV") bonusCB = 4670000;
            else if (kdMtr == "Snc") bonusCB = 3699000;
        }

        if (jnsBonus == "BARANG") {
            if(kdMtr == "CBR") ip13++;
            else if (kdMtr == "ADV") galaxy++;
            else if (kdMtr == "Snc") redmi++;
       }

        if (jnsBeli == "KREDIT") {
             tambahan =  hrgMtr * 0.3;
             kredit = hrgMtr + tambahan;
             jmlByrKredit = kredit * 0.2;
        }
       
        if (jnsBonus == "CASHBACK") jmlByrTunai = hrgMtr - bonusCB;
        else jmlByrTunai = hrgMtr;

        cout << fixed << setprecision(2);
        cout << "\n";

        cout << left << setw(30) << "Jenis Motor" << ": " << jnsMtr << endl;
        cout << left << setw(30) << "Harga Motor" << ": " << hrgMtr << endl;

        if (jnsBeli == "TUNAI"){
            cout << left << setw(30) << "Jumlah Yang Harus Dibayar" << ": " << jmlByrTunai << endl;
            if (jnsBonus == "CASHBACK") 
                cout << left << setw(30) << "Bonus" << ": " << bonusCB << endl;
            else cout << left << setw(30) << "Bonus" << ": " << bonusBR << endl;
            }
        else 
            cout << left << setw(30) << "Jumlah Yang Harus Dibayar" << ": " << jmlByrKredit << endl;
        
        if (jnsBeli == "KREDIT") totalByr += jmlByrKredit;
        else totalByr += jmlByrTunai;

       if (jnsBeli == "TUNAI" && jnsBonus == "CASHBACK")
        totalCB += bonusCB;


        cout << "\nMasih Ada Data lain? [y/t] : "; cin >> masihData;
        if (masihData == "t") break;
    }
    
    cout << "\n";
    cout << left << setw(40) << "Jumlah Motor CBR-250 RR yang terjual" << ": " << jmlCBR << endl;
    cout << left << setw(40) << "Jumlah Motor ADV 160 CBS yang terjual" << ": " << jmlADV << endl;
    cout << left << setw(40) << "Jumlah Motor Sonic 150R yang terjual" << ": " << jmlSNC << endl << endl;

    cout << left << setw(40) << "Total Jumlah Pembayaran" << ": " << totalByr << endl << endl;

    cout << left << setw(40) << "Jumlah Bonus Iphone 13" << ": " << ip13 << endl;
    cout << left << setw(40) << "Jumlah Bonus Galaxy Tab S10" << ": " << galaxy << endl;
    cout << left << setw(40) << "Jumlah REDMI Note 14" << ": " << redmi << endl << endl;

     cout << left << setw(40) << "Total Jumlah Bonus Cashback" << ": " << totalCB << endl;
}