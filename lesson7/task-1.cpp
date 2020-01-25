#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main (void)
{
    srand(time(NULL));

    int arr[10];

    cout << "First random array" << endl;
    for (int i = 0; i < 9; i++)
    {
        arr[i] = rand() % 8 + 7;
        cout << arr[i] << "\t";
    }
    cout << endl;

    for (int j = 0; j < 9; j++)
    {
        if (arr[j] > 10)
        {
            arr[j] -= 10;
        }
    }

    cout << "Second array" << endl;
    for (int n = 0; n < 9; n++)
    {
        cout << arr[n] << "\t";
    }
    cout << endl;
    return 0;
}

