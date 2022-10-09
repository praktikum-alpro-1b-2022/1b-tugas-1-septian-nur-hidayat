#include <iostream>
using namespace std;

int main () {
    //
    int a =6, b = 12, c, d, e;
    c = a; // variabel c diisi dengan variabel a yang bernilai 6
    a = b; // variabel a disi dengan variabel b yang bernilai 12
    b = c; // variabel b diisi dengan variabel c yang bernilai 6

    cout << "Menukar variable dengan variable sementara\n";
    cout << "A: " << a << endl << "B: " << b << endl ;

    d =1000;
    e =2000;

    d = d+e;
    e = d-e;
    d = d-e;

    cout << "menukar dua variable tanpa variable sementara\n";
    cout << "\nd: " << d << endl << "E " << e << endl;

    return 0;
}
