#include <iostream>
#include <cstdlib> 
using namespace std;

int main(){
    int n;
    cout << "n = ";
    cin >> n;
    n = abs(n);
    int Nn = n / 1000;
    int nN = n % 10;
    cout << "---------RESULT---------\n";
    cout << "first number = " << Nn;
    cout << "\nlast number = " << nN;
    
    return 0;
}