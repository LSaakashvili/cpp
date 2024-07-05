#include <iostream>

using namespace std;

int main(){

    char op;
    int fnum;
    int snum;

    cout << "Welcome to my first C++ calculator!" << endl;

    cout << "Please enter operator: +, -, *, /. " << endl;
    cin >> op;

    cout << "Enter your operands. " << endl;
    cin >> fnum >> snum; 

    switch (op) {
        case '+':
            cout << fnum << " + " << snum << " = " << fnum + snum;
            break;        
        case '-':
            cout << fnum << " - " << snum << " = " << fnum - snum;
            break;

        case '*':
            cout << fnum << " * " << snum << " = " << fnum * snum;
            break;
        case '/':
            cout << fnum << " / " << snum << " = " << fnum / snum;
            break;
        default:
            cout << "Operator is not correct!";
            break;
    }

    return 0;
}