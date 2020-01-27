#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main (void)
{
    string strarr[3] = {"", "", ""};

    for (int i = 0; i < 3; i++)
    {
        int r = i + 1;
        cout << "Enter a " << r << " string to write: ";
        cin >> strarr[i];
    }
    // cin >> strarr[0];
    ofstream file ("test.txt");
    if (file.is_open())
    {

        file.close();
    } else cout << "unable to open file";
    return 0;
}