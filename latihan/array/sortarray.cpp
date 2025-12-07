#include <iostream>
using namespace std;

int main () {

    int ars[5], ad[5];
    int x=0, b=0, c=0, d=0, g=0;
  
 
    while (b < 5) {
      cout << b << endl;
      cout << "Masukan nilai "; cin >> x;
      ars[b] = x;
      b++;
      
    }
 
    while (c < 5) {
      cout << ars[c] << " ";
      c++;
      
    }

    int maxs[5] = 0;
   
    cout << endl;

    while (d < 5) {
      if (ars[d] > ars[d+1]) maxs[d] = ars[d];
        if(maxs[d] > ars)
      d++;
    }


    
    }


