#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, fab = 0;
    cin >> n;
    set <int> st;
    int x;

    for(int i = 0; i < n; i++) {
        int consulta;
        cin >> consulta;

        if(st.find(consulta) == st.end()) {
            st.insert(consulta);
            fab += 2;
        } else {
            st.erase(consulta);
        }
    }

    cout << fab;

}