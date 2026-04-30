#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;

    string s;
    int freq[10] = {0};

    while(n--) {
        cin >> s;

        for(int i = 0; i < s.size(); i++) {
            int x = s[i] - '0';
            freq[x]++; 
        }
    }

    for(int i = 0; i <= 9; i++) {
        cout << i << " - " << freq[i] << "\n";
    }

}