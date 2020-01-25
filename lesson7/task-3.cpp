#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void buble(int mas[], int sizearr);

int main (void)
{
    srand(time(NULL));
    int arr1[10];
    int arr2[10];
    int arr3[10];
    int sum = 0;

    cout << "First array: " << endl;
    for (int i = 0; i < sizeof(arr1)/sizeof(arr1[0]); i++)
    {
        arr1[i] = rand() % 21 + 10;
        cout << arr1[i] << "\t";
    }

    cout << endl;

    cout << "Second array: " << endl;
    for (int i = 0; i < sizeof(arr2)/sizeof(arr2[0]); i++)
    {
        arr2[i] = rand() % 21 + 10;
        cout << arr2[i] << "\t";
    }

    cout << endl;

    cout << "Third array: " << endl;
    for (int i = 0; i < sizeof(arr3)/sizeof(arr3[0]); i++)
    {
        arr3[i] = arr1[i] + arr2[i];
        cout << arr3[i] << "\t";
    }

    for (int i = 0; i < sizeof(arr3)/sizeof(arr3[0]); i++)
    {
        sum += arr3[i];
    }

    cout << endl;
    // cout << sum << endl;
    cout << "Average of third array: " << sum/(sizeof(arr3)/sizeof(arr3[0])) << endl;
    buble(arr3, sizeof(arr3)/sizeof(arr3[0]));

    cout << "Min value of third array: " << arr3[0] << endl;
    cout << "Max value of third array: " << arr3[sizeof(arr3)/sizeof(arr3[0])-1] << endl;
    return 0;
}

void buble(int mas[], int sizearr)
{
    for(int i = 0; i < sizearr; i++)
    {
        for(int a = i+1; a < sizearr; a++)
        {
            if(mas[i] > mas[a])
            {
                int x = mas[i];
                mas[i] = mas[a];
                mas[a] = x;
            }
        }
    }
}