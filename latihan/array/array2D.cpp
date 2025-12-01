#include <iostream>
#include <iomanip>
using namespace std;

int ary[3][3];


int main () {
    int i, j, a, b, f = 0, tot= 0, totK = 0, totDiaKri = 0;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cout << "Masukan nilai untuk ary[" << i << "][" << j << "] : ";
            cin >> ary[i][j];
           
        }
        cout << endl;
    }

    //[0,0][0,1][0,2]
    //[1,0][1,1][1,2]
    //[2,0][2,1][2,2]
for (a = 0; a < 3; a++) {
        for (b = 0; b < 3; b++) {
        cout << setw(4) << ary[a][b] << " ";
        tot += ary[a][b];
        
        if (a == b) totDiaKri += ary[a][b];
        if (a + b == 2) f += ary[a][b];
        }
        cout <<" = "<< tot;
        tot = 0;
        cout << endl;
    
}

for (a = 0; a < 3; a++) {
    for (b = 0; b < 3; b++) {
         totK += ary[b][a];
    }
        cout << setw(5) << totK;
        totK = 0;
}

    cout << "\n\nTotal Diagonal Kiri : " << totDiaKri << endl;
    cout << "\n\nTotal Diagonal Kanan : " << f << endl;

}














