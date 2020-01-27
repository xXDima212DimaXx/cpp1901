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
        file << strarr[0] << endl;
        file << strarr[1] << endl;
        file << strarr[2] << endl;
        file.close();
    } else cout << "unable to open file";

    /*string line;

    ifstream file2 ("test.txt");
    if (file2.is_open())
    {
        while (getline(file2, line))
        {
            cout << line << endl;
        }
        file2.close();
    } else cout << "unable to open file";*/
    return 0;
}