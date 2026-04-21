#include <iostream>
#include <map>
using namespace std;

int main() {
    int N;
    cin >> N;

    map<int, pair<int, int>> botas; 

    for (int i = 0; i < N; i++) {
        int M;
        char L;
        cin >> M >> L;

        if (L == 'E') {
            botas[M].first++;
        } else {
            botas[M].second++;
        }
    }

    int pares = 0;

    for (auto &b : botas) {
        pares += min(b.second.first, b.second.second);
    }

    cout << pares << endl;

    return 0;
}