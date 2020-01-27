#include <iostream>
#include <fstream>
#include <cstring>
#include <string>

using namespace std;

int main (void)
{
    string name;
    cout << "Enter a command: ";
    cin >> name;
    string path = "keystore/";
    string full = path + name;
    char* y = new char[y, full.length() + 1];
    strcpy(y,full.c_str());
    ifstream file (y);
    file.open(y, ios::out);
    string line;
    if (file.is_open())
    {
        while (getline(file, line))
        {
            cout << line << endl;
        }
    }
    file.close();
    return 0;
}