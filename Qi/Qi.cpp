

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int A, B, C, D, E, maior, menor;

  cout << "Digite o valor de A: ";
  cin >> A;
  cout << "Digite o valor de B: ";
  cin >> B;
  cout << "Digite o valor de C: ";
  cin >> C;
  cout << "Digite o valor de D: ";
  cin >> D;
  cout << "Digite o valor de E: ";
  cin >> E;

  maior = A;
  menor = A;

  if (B > maior){
    maior = B;
  }
  else if (B < menor){
    menor = B;
  }
  if (C > maior){
    maior = C;
  }
  else if (C < menor){
    menor = C;
  }
  if (D > maior){
    maior = D;
  }
  else if (D < menor){
    menor = D;
  }
  if (E > maior){
    maior = E;
  }
  else if (E < menor){
    menor = E;
  }

  cout << "Maior valor: " << maior << "\n";
  cout << "Menor valor: " << menor << "\n";

  return 0;
}