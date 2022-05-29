

#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    int A;
    int B;
    int C;
    cout << "Digite o valor de A: ";
    cin >> A;

    cout << "Digite o valor de B: ";
    cin >> B;

    cout << "Digite o valor de C: ";
    cin >> C;

    if (A > B) {                                      
        if (B > C){
            cout << A << " > " << B << " > " << C;
        }
        else{
            if (A > C){
                cout << A << " > " << C << " > " << B;
            }
            else {
                cout << C << " > " << A << " > " << B;
            }   
        }
    }
    else {
        if (A > C){
            cout << B << " > " << A << " > " << C;
        }
        else{
            if (B > C){
                cout << B << " > " << C << " > " << A;
            }
            else {
                cout << C << " > " << B << " > " << A;
            }
        }
    }
    return 0;
};