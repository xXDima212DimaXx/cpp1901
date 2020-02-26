#include <iostream>
#include <limits>

using namespace std;

void intro();
int getInputNumber(int count);
int pluss(int num1, int num2);
int minuss(int num1, int num2);
int multiple(int num1, int num2);
int divide(int num1, int num2);

int main() {
    intro();
    int num1 = getInputNumber(1);
    int num2 = getInputNumber(2);

    /********* BEGIN INPUT BUGFIX **********/
    char mOperator[1];
    cout << "\tEnter a math perator (+, -, * or /): ";
    cin >> mOperator[0];

    if ((cin.fail() == 0)) {
        // Continue executing
    } else {
        // Terminate and show error
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid operator!" << endl;
        return -1;
    }

    /********* END INPUT BUGFIX **********/

    if (mOperator[0] == '+') {
        cout << "\t" << num1 << " + " << num2 << " = " << pluss(num1, num2) << endl;
    } else if (mOperator[0] == '-') {
        cout << "\t" << num1 << " - " << num2 << " = " << minuss(num1, num2) << endl;
    } else if (mOperator[0] == '*') {
        cout << "\t" << num1 << " * " << num2 << " = " << multiple(num1, num2) << endl;
    } else if (mOperator[0] == '/') {
        cout << "\t" << num1 << " / " << num2 << " = " << divide(num1, num2) << endl;
    } else {
        cout << "\t" << "Invalid operator!" << endl;
    }

    cout << "" << endl;

    return 0;
}