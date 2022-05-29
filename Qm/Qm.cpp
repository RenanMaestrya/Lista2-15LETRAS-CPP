

#include <iostream>
using namespace std;
int main()
{
    string nome, sexo;

    cout << "Digite seu nome: ";
    cin >> nome;

    cout << "Digite seu sexo (F/M): ";
    cin >> sexo;

    if(sexo == "F" || sexo == "f"){
        cout << "Olá, senhora " << nome << ", seja bem-vinda(o)!" << endl;
    }
    else if(sexo == "M" || sexo == "m"){
        cout << "Olá, senhor " << nome << ", seja bem-vindo(o)!" << endl;
    }
    else{
        cout << "Sexo inválido!" << endl;
    }

    return 0;
};