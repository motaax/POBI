#include <bits/stdc++.h>
using namespace std;

int main() {
    int matriz[3][3];

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> matriz[i][j];
        }      
    }

    for(int i = 0; i < 3; i++) {
        int soma = 0;
        for(int j = 0; j < 3; j++) {
            soma += matriz[i][j];
        }
        
        cout << "Linha " << i << ": " << soma << "\n";
    }
}