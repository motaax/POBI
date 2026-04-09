#include <iostream>
using namespace std;

int main() {
    int n;
    // scanf("%d", &n); EM C 
    cin >> n;

    if(n > 0) {
        // printf("Positivo \n"); EM C
        cout << "positivo \n";
    } else if(n < 0) {
        cout << "negativo \n";
    } else {
        cout << "nulo \n";
    }

    return 0;
}