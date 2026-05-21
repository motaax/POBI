#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    set <int> st;
    int x;

    while(n--) {
        cin >> x;
        st.insert(x);
 
    }

    cout << st.size();

}