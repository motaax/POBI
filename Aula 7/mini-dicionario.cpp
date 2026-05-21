#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    map <string, string> dicio;
    string eng, pt;

    for(int i = 0; i < n; i++) {
        cin >> eng >> pt;
        dicio[eng] = pt;
    }

    string word;
    while(cin >> word) {
        cout << dicio[word] << " ";
    }

    cout << "\n";

}