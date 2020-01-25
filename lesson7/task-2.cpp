#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main (void)
{
    int replaced = 0;
    int arr[50];
    int d = 0;

    for (int i = 1; i < 100; i++)
    {
        replaced = i - 1;

        if (replaced % 2 == 0)
        {
            //cout << d << "\t";
            arr[d] = replaced;
            cout << arr[d] << "\t";
            d++;
        }
    }

    cout << endl;
    return 0;
}