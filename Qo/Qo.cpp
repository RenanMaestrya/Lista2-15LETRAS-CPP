

#include <iostream>
using namespace std;
int main()
{
    int A;
    int result;

    cout << "Digite o primeiro número: ";
    cin >> A;

    result = A * 2;

    if(result > 30){
        cout << "Valor valido, o dobro igual a: " << result << endl;
    }
    else{
        cout << "Valor invalido, o dobro desse valor é menor ou igual a 30!" << endl;
    }
};