#include <bits/stdc++.h>
using namespace std;

int main() {
    int mat[3][3];

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> mat[i][j];
        }
    }
        
    int digp = 0, digs = 0;

    for(int i = 0; i < 3; i++) {
        digp += mat[i][i];
        digs += mat[i][2 - i];
    }

    cout << "Diagonal principal: " << digp << '\n';
    cout << "Diagonal secundaria: " << digs << '\n';
}