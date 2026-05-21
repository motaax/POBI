#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, fab = 0;
    cin >> n;
    set <int> st;
    int x;

    for(int i = 0; i < n; i++) {
        int cons;
        cin >> cons;

        if(st.find(cons) == st.end()) {
            st.insert(cons);
            fab += 2;
        } else {
            st.erase(cons);
        }
    }

    cout << fab;

}