#include <iostream>
using namespace std;

int main() {
    float nota1, nota2, media;
    cin >> nota1 >> nota2;

    media = (nota1 * 2 + nota2 * 3) / 5;

    if(media >= 7) {
        cout << "Aprovado \n";
    } else if(media < 3) {
        cout << "Reprovado \n";
    } else {
        cout << "Final \n";
    }
    
}