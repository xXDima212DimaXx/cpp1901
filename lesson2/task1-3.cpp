#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void buble(int mas[], int sizearr);

int main(void) {
    srand(time(NULL));

    int i;
    int j;
    int num;
    int arr[5][5];
    int max;
    int sum;
    int msum;

    for (i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        for (j = 0; j < sizeof(arr[0])/sizeof(arr[0][0]); j++) {
            // RAND HERE

            num = rand() % 100 + 10;
            arr[i][j] = num;
        }

    }

    i = 0;
    j = 0;

    for (i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        for (j = 0; j < sizeof(arr[0])/sizeof(arr[0][0]); j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "Array have " << sizeof(arr)/sizeof(arr[0]) << " rows and " << sizeof(arr[0])/sizeof(arr[0][0]) << " cols" << endl;

    int sumarr[sizeof(arr)/sizeof(arr[0])];

    for (i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        sum = 0;
        for (j = 0; j < sizeof(arr[0])/sizeof(arr[0][0]); j++) {
            sum += arr[i][j];
        }
        sumarr[i] = sum;
    }

    /*for (int p = 0; p < sizeof(arr)/sizeof(arr[0]); p++) {
        cout << sumarr[p] << "\t";
    }*/

    cout << endl;

    buble(sumarr, sizeof(sumarr)/sizeof(sumarr[0]));

    for(int i = 0; i < sizeof(sumarr)/sizeof(sumarr[0]); i++)
    {
        // cout << sumarr[i] << "\t";
    }
    // cout << endl;
    msum = sumarr[sizeof(sumarr)/sizeof(sumarr[0])-1];
    // cout << msum;

    for (i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        sum = 0;
        for (j = 0; j < sizeof(arr[0])/sizeof(arr[0][0]); j++) {
            sum += arr[i][j];
        }

        sumarr[i] = sum;

        if (msum = sum) {
            max = i+1;
            break;
        }
    }

    cout << endl;
    cout << "Max sum in " << max << " row with sum " << msum << endl;
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