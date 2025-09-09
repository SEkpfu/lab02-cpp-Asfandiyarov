#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double R,h,S,V;
    cout << "R = ";
    cin >> R;
    cout << "h = ";
    cin >> h;
    // Площадь полной поверхности цилиндра
    S = 2 * M_PI * R * ( R + h ); 
    // Обьем цилиндра
    V = M_PI * pow(R,2) * h;
    cout << "---------RESULT---------\n";
    cout << "S = " << S;
    cout << "\nV = " << V;
    return 0;
}