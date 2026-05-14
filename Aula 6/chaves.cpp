#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    stack<char> s;
    bool b = true;

    for(int i=0; i<n; i++){
        string line;
        getline(cin, line);

        for(char c : line){
            if(c =='{'){
                s.push(c);
            }
            else if(c == '}'){
                if(s.empty() || s.top()!='{'){
                    b = false;
                    break;
                }
                s.pop();
            }
        }

        if(!b) {
            break;
        }
    }

    if(!s.empty()){
        b = false;
    }

    if(b) {
        cout<<'S'<<endl;
    } else {
        cout<<'N'<<endl;
    }
    
}