#include <bits/stdc++.h>
using namespace std;

int main() {
    vector <int> vet(10);
    int x, cont = 0;

    for(int i = 0; i < 10; i++) {
        cin >> vet[i];
    }

    cin >> x;

    for(int i = 0; i < 10; i++) {
        if(x == vet[i]) {
            cont++;
        }
    }

    if(cont) {
        cout << cont << "\n";
    } else {
        cout << "Mia x \n";
        return 0;
    }
    
    for(int i = 0; i < 10; i++) {
        if(x == vet[i]) {
            cout << i << " ";
        }
    }
    
}