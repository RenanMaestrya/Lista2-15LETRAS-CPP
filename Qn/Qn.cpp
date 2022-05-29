

#include <iostream>
using namespace std;
int main()
{
    int A, B, C;
    int soma;

    cout << "Digite o primeiro número: ";
    cin >> A;
    cout << "Digite o segundo número: ";
    cin >> B;
    cout << "Digite o terceiro número: ";
    cin >> C;

    soma = A + B + C;

    if(soma >= 100){
        cout << "Valor valido, a soma é igual a: " << soma << endl;
    }
    else{
        cout << "Valores invalos a soma dos números é menor que 100!" << endl;
    }
};