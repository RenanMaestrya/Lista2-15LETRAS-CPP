

#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
	int N;
	
	cout << "digite um valor para transforma-lo em modulo: " ;
	cin >> N;
	
	if(N < 0)
		cout << "O valor em modulo é: " << N * -1 << "\n";
	else
		cout << "O valor em modulo é: " << N ;
		
	return 0;
};

