

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int A;

    cout << "Digite um valor de 1 a 9: ";
    cin >> A;

    if(A >=1 && A <= 9){
        cout << "o valor está na faixa permitida" << endl;
    }
    else{
        cout << "o valor não está na faixa permitida" << endl;
    }
    return 0;
};