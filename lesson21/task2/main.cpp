#include <iostream>
#include <string>

using namespace std;

void calc();
std::string func(std::string name);

int main() {
    string str = "Mike";
    calc();
    cout << func(str) << endl;;
    return 0;
}