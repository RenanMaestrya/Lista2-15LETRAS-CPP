

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int A;

    cout << "Digite qualquer valor: ";
    cin >> A;

    if(A > 3){
        cout << "o valor está acima do permitido" << "\n";
    }
    else{
        cout << "O valor está está na faixa permitida: " << A <<"\n";
    }

    return 0;
};