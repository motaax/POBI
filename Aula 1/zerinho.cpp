#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
    if(a == b && a == c) {
        cout << "* \n";
    } else if(a != b && a != c) {
        cout << "A \n";
    } else if(b != c && b != a) {
        cout << "B \n";
    } else {
        cout << "C \n";
    }

}