#include <iostream>
using namespace std;

int main() {
    double a, b, c, V, S;

    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;

    V = a * b * c;
    S = 2 * (a*b + b*c + a*c);

    cout << "---------RESULT---------\n";
    cout << "V = " << V << endl;
    cout << "S = " << S << endl;

    return 0; 
}