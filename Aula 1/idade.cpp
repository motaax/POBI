#include <iostream>
using namespace std;

int main() {
    int m, a, b, c, maior;
    cin >> m >> a >> b;

    c = m - a - b;

    if(a >= b && a >= c) {
        maior = a;
    } else if(b >= a && b >= c) {
        maior = b;
    } else {
        maior = c;
    }

    cout << maior << "\n";

}