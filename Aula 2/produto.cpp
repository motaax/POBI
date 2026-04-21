#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector <long long> A(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    long long op1 = A[N-1] * A[N-2] * A[N-3];
    long long op2 = A[0] * A[1] * A[N-1];

    cout << max(op1, op2) << endl;

    return 0;
}