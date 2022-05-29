

#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    double A;
    double B;
    double C;
    double delta;
    double baskara;

    cout << "Digite o valor de A: ";
    cin >> A;

    cout << "Digite o valor de B: ";
    cin >> B;

    cout << "Digite o valor de C: ";
    cin >> C;

    delta = (B*B) - (4*A*C);

    if(delta < 0)
        cout << "Não existem raízes reais\n";
    else
    {   
        if(delta == 0)
        {
            baskara = (-B)/(2*A);
            cout << "A raiz desta equação é: " << baskara << "\n";
        };
        if(delta > 0)
        {
            baskara = (-B + sqrt(delta))/(2*A);
            cout << "A primeira raiz desta equação é: " << baskara << "\n";
            baskara = (-B - sqrt(delta))/(2*A);
            cout << "A segunda raiz desta equação é: " << baskara << "\n";
        };
    };

    return 0;
};