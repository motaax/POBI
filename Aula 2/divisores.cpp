#include <iostream>
using namespace std;

int main() {
    int n, acum = 0, total = 0;
    cin >> n;

    for(int i = 0; i <= n; i++) {
        if(n % i == 0) {
            acum += 1;
            total += 1;
        }
    }

    cout << total << " divisor(es): ";
    for(int i = 1; i <= n; i++){
        if(n % i == 0) {
            cout << i << " ";
        }
    }

    cout<< "\n" << "Soma de divisores = " <<acum<< "\n";
    if(total != 2) {
        cout << "Nao primo \n";
    } else {
        cout << "Primo \n";
    }

}