/* Andragradsekvation */
// 4x2+32x+28=0
/*
x = -7 löser ekvationen
4-1^2 + 32-1+28 = 0
x = -1 löser ekvationen
*/
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    system("chcp 65001");
    int a, b, c;
    cout << "Ange en 2:a grads ekvation. Ange ax^2 + bx + c = 0" << endl;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    cout << "c=";
    cin >> c;

    for(int x = -1000; x < 1000; x++) {
        if((a * pow(x, 2) + b * x + c) == 0) {
            cout << a  << x << "^2 + " << b << x << '+' << c << " = 0" << endl;
            cout << "x = " << x << " löser ekvationen" << endl;
        }
    }

    return 0;
}
