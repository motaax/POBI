#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, cons = 0, ans = 0;
    cin >> n;

    vector <int> vet(n);

    for(int i = 0; i < n; i++) {
        cin >> vet[i];
    }

    for(int i = 0; i < n - 1; i++) {
        if(vet[i] == vet[i + 1]) {
            cons++;
        } else {
            ans = max(ans, cons);
            cons = 0;
        }
    }

    ans = max(ans, cons);

    cout << ans + 1 << "\n";
}