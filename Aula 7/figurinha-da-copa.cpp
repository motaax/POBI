#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, c, m;
    cin >> n >> c >> m;

    map <int, bool> falta;

    for (int i = 0; i < c; i++) {
        int x;
        cin >> x;

        falta[x] = true; 
    }

    for (int i = 0; i < m;i++) {
        int y;
        cin >> y;


        auto it = falta.find(y);

        if (it != falta.end()) {
            falta.erase(it);
        }
    }

    cout << falta.size()<<"\n";
}