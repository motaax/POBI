#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n; 
    cin >> n; 

    if(n < 2){
        cout << "N \n";
        return 0;
    }

    for(long long i = 2 ; i*i <= n; i++){
        if(n % i == 0){
            cout << "N \n";
            return 0;
        }
    }

    cout << "S \n";
}