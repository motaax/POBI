#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;

    cin >> a >> b >> c >> d;

    bool cond = (a == b + c + d) && (b + c == d) && (b == c);

    if(cond) {
        cout << "S \n";
        return 0;
    }

    cout << "N \n";

}