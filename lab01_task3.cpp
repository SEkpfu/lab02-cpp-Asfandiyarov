#include <iostream>
using namespace std;
int main(){
    double tF, tC, tK;
    cout << "Celcia (tC) = ";
    cin >> tC;
    tF = (  (9/5) * tC + 32   );
    tK = tC + 273;
    cout << "----------RESULT----------- \n";
    cout << "Fahrenheit (tF) = " << tF;
    cout << "\nKelvin (tK) = " << tK;
    return 0;
}