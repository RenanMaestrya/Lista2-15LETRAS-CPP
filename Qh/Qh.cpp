

#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    int A;
    int B;
    int C;
    int D;

    cout << "Digite o valor de A: ";
    cin >> A;

    cout << "Digite o valor de B: ";
    cin >> B;

    cout << "Digite o valor de C: ";
    cin >> C;

    cout << "Digite o valor de D: ";
    cin >> D;

    if ((A % 2 == 0) || (A % 3 == 0))
    {
    cout << A << " :é divisivel por 2 ou 3" << endl;
    }
    else
        {
        cout << A << " :Não é divisivel por 2 ou 3" << endl;
        }

    if ((B % 2 == 0) || (B % 3 == 0))
    {
    cout << B << " :é divisivel por 2 ou 3" << endl;
    }
    else
        {
        cout << B << " :Não é divisivel por 2 ou 3" << endl;
        }
    
    if ((C % 2 == 0) || (C % 3 == 0))
    {
    cout << C << " :é divisivel por 2 ou 3" << endl;
    }
    else
        {
        cout << C << " :Não é divisivel por 2 ou 3" << endl;
        }

    if ((D % 2 == 0) || (D % 3 == 0))
    {
    cout << D << " :é divisivel por 2 ou 3" << endl;
    }
    else
        {
        cout << D << " :Não é divisivel por 2 ou 3" << endl;
        }
        
};