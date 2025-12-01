
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
     
     int accumulator = 0;
     int value;
	
     cout << "Program ini menjumlahkan angka "
              << "yang dimasukkan oleh pengguna\n";
     cout << "Perulangan berhenti dengan memasukkan "
              << "angka nol\n";

    
    while(true){

                cout << "Masukkan angka berikutnya : ";
                cin >> value;
            
            if (value < 0)
            {
                cout << "Angka negatif tidak diperkenankan!!\n";
                continue;
            }
            else if (value==0) break;
                
            
            accumulator = accumulator + value;
    }
             
        cout << "\nJumlahnya adalah "
	   << accumulator
	   << "\n";
               
               system("PAUSE");
               return 0;
          }


