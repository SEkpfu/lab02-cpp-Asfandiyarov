#include <iostream>
#include <cmath>
using namespace std;
int main(){
    const double PI = 3.14159;
    double V,R;
    cout << "Radius = ";
    cin >> R;
    V = ( (4/3)*PI*(pow(R,3)) );
    cout << "---------RESULT---------\n";
    cout << "V = " << V;
    return 0;

}