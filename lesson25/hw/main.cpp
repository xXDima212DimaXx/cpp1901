#include <iostream>
#include "bank.hpp"

using namespace std;

void addClient();

void aboutClient();

int main() {
    int action;
    echo << "Bank" << endl;
    echo << endl;
    echo << "Select an action" << endl;
    echo << "\t[1] Clients" << endl;
    echo << "\t[2] Register" << endl;
    echo << endl;
    echo << "Selection: ";
    cin >> action;
    if (action == 1) {
        //
    } else if (action == 2) {
        //
    } else {
        cout << "Please select a valid option" << endl;
    }
    return 0;
}

void addClient() {

}

void aboutClient() {

}