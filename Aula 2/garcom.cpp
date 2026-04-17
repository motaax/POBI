#include <iostream>
using namespace std;

int main() {
    int n, l, c, i;
    cin >> n;

    int soma = 0;

    for(i = 0; i < n; i++) {
        cin >> l >> c;
        if(l > c) {
            soma+= c; 
        }
    }

    cout << soma;
    
}