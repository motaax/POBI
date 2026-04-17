#include <iostream>
using namespace std;

int main() {
    int n, i;

    int soma = 0;

    //for(;;) infinito
    while(true) {
        cin >> n;

        if(n == 2018) {
            break;
        }

        soma++;
    }

    cout << soma;
    
}