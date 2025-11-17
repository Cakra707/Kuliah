#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int r;
int main() {
   

    for (r=1;r<=100;r++) {
        if (r % 3 == 0 && r % 2 == 0) cout << "FIZZ BUZZ" <<endl;
       else  if (r % 2 == 0) cout << "FIZZ" <<endl;
       else  if (r % 3 == 0) cout << "BUZZ" <<endl;
        else cout << r <<endl;
    }

	return 0;
}
