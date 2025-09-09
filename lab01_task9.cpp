#include <iostream>
using namespace std;

int main(){
    int N;
    cout << "N = "; 
    cin >> N;
    int h, ostatok, m, s;
    
    h = N / 3600;
    ostatok = N % 3600;
    m = ostatok / 60;
    s = ostatok % 60;
    
    cout << "---------RESULT---------\n";
    cout << "Time: " << h;
    cout << " hour(s) ";
    cout << m;
    cout << " minute(s) ";
    cout << s;
    cout << " second(s)";

    return 0;
}