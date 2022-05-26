

#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
  int a, b;
  cout << "### A subtração ocorrerá do valor maior pelo menor ###\n";
  cout << "Digite o valor de A: ";
  cin >> a;
  
  cout << "Digite o valor de B: ";
  cin >> b;

  if(a > b)
    cout << "O valor de A foi maior que o de B, então, o resultado da subtração é: " << a - b << "\n";
  else
    cout << "O valor de B foi maior que o de A, então, o resultado da subtração é: " << b - a << "\n";
};
