

#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
  int A, B;
  cout << "### A subtração ocorrerá do valor maior pelo menor ###\n";
  cout << "Digite o valor de A: ";
  cin >> A;
  
  cout << "Digite o valor de B: ";
  cin >> B;

  if(A > B)
    cout << "O valor de A foi maior que o de B, então, o resultado da subtração é: " << A - B << "\n";
  else
    cout << "O valor de B foi maior que o de A, então, o resultado da subtração é: " << B - A << "\n";
};
