#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i;
    cin >> n;
    int valores[n];

    for(i = 0; i < n; i++) {
        cin>>valores[i];
    }

    sort(valores, valores + n);

    cout << valores[n - 1] << "\n";
    cout << valores[0] << "\n";
    
}