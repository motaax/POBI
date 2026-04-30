#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    string reverso = s;

    reverse(reverso.begin(), reverso.end());

    if(s == reverso) {
        cout << "eh palindromo" << "\n";
    } else {
        cout << "nao eh palindromo" << "\n";
    }

}