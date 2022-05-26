

#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
	float n1, n2, n3, n4, media;
    float n5;

	cout << "Digite a nota do primeiro bimestre: ";
	cin >> n1;
	
	cout << "Digite a nota do segundo bimestre: ";
	cin >> n2;
	
	cout << "Digite a nota do terceiro bimestre: ";
	cin >> n3;
	
	cout << "Digite a nota do quarto bimestre: ";
	cin >> n4;
	
	media = (n1 + n2 + n3 + n4)/4;
	
	if(media >= 7)
		cout << "Aprovado com nota: " << media << "\n";
	else
		cout << "Parcialmente reprovado com nota: " << media << "\n";
        cout << "Digite a nota do exame de recuperação para ter uma nova chance de passar: ";
        cin >> n5;

        media = (media + n5)/2;
        if(media >= 5)
            cout << "Aprovado com exame, nota: " << media << "\n";
        else
            cout << "Reprovado com nota: " << media << "\n";
        
	
	return 0;
};
