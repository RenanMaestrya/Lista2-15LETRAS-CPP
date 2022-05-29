#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int A;

  cout << "Digite A: ";
  cin >> A;

  if (A % 2 == 0)
  {
    cout << "O numero " << A << "é par" << endl;
  }
  else
  {
    cout << "O numero " << A << "é impar" << endl;
  }
  return 0;
}