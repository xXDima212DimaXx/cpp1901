#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int Fib(int i)
{
    unsigned long f1 = 0;
    unsigned long f2 = 1;
    unsigned long fn;
    ofstream file ("fib.txt");
    if (file.is_open())
    {
        if (i < 1)
        {
            return 0;
        }
        if (i == 1)
        {
            file << "0" << endl;
            file << "1" << endl;
            cout << "0" << endl;
            cout << "1" << endl;
        }
        if (i > 1)
        {
            file << "0" << endl;
            file << "1" << endl;
            cout << "0" << endl;
            cout << "1" << endl;
            for (int j = 1; j < i; j++)
            {
                fn = f1 + f2;
                file << fn << endl;
                cout << fn << endl;
                f1 = f2;
                f2 = fn;
            }

        }
        file.close();
    }
    else cout << "Something went wrong";

    return 0;
}

int main()
{
    int input;
    cout << "Enter number: ";
    cin >> input;

    Fib(input);
    return 0;
}