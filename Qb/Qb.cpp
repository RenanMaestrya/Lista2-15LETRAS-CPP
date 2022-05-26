

#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
	int n;
	
	cout << "digite um valor para transforma-lo em modulo: " ;
	cin >> n;
	
	if(n < 0)
		cout << "O valor em modulo é: " << n * -1 << "\n";
	else
		cout << "O valor em modulo é: " << n ;
		
	return 0;
}

