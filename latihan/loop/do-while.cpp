#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;
int main() {
   cout << " Program ini menjumlahkan deretan angka\n"
        << " Menampilkan jumlahnya ketika\n" 
        << " angka negatif dimasukkan\n"
        << "[--------------------------------------]\n";
   int accumulator, total;
   total = 0;
  
   do {  
       accumulator = 0;
       cout << "Mulai deretan angka\n";
       for(;;) { 
          
          int value = 0;
          cout << "Masukkan angka-nya : ";  cin >> value;
          
          if (value < 0) break;
          
          accumulator = accumulator + value;
	    } 

	      total += accumulator;
	      
	      cout << "Akumulasi deretan angkanya adalah " 
                 << accumulator << endl;
	      cout << "Total semua angka yang ada = " << total 
                 << endl << endl;
	      if (accumulator != 0)
	         cout << "Untuk meng-akhiri, masukkan -1" << endl;
		
	} while (accumulator != 0);
	
	cout << "Terima kasih yaa.." << endl;
	
	system("PAUSE");
	return 0;
}
