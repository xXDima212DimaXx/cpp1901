#include <iostream>

using namespace std;

int getValueFromUser();

// Buble sort
void buble(int mas[], int sizearr);

// Print array
void printarr(int arrs[], int c);

int main(void) {

    // First task
    cout << "Task 1" << endl;
    const int COUNT = 10;

    int arr[COUNT];

    for (int index = 0; index < COUNT; index++) {
        cout << "Enter " << index + 1 << " integer: ";
        arr[index] = getValueFromUser();
    }

    cout << "Arr: ";

    printarr(arr, COUNT);

    cout << endl;

    // Second task
    cout << endl;
    cout << "Task 2" << endl;

    int SUM = 0;

    for (int index = 0; index < COUNT; index++) {
        SUM += arr[index];

        // Debug
        // cout << SUM << endl;
    }

    cout << "Average of array: " << SUM/COUNT << endl;

    // Task 3
    cout << endl;
    cout << "Task 3" << endl;

    cout << "More than 7: ";

    int MORE = 7;
    int MORE_COND = 0;

    for (int index = 0; index < COUNT; index++) {
        if (arr[index] > MORE) {
            cout << arr[index] << " ";
            MORE_COND = 1;
        }
    }

    if (MORE_COND == 0) {
        cout << "Nothing to show";
    }

    cout << endl;

    // Task 4
    cout << endl;
    cout << "Task 4" << endl;

    int SUM_EVEN = 0;

    for (int index = 0; index < COUNT; index++) {
        if (index % 2 == 0) {
            SUM_EVEN += arr[index];
        }
    }

    cout << "Sum of even intems of arr: " << SUM_EVEN << endl;

    // Task 5
    cout << endl;
    cout << "Task 5" << endl;

    int arrh[COUNT];

    for (int index = 0; index < COUNT; index++) {
         arrh[index] = arr[index];
    }

    buble(arrh, COUNT);
    cout << "Max value of arr: " << arrh[COUNT-1] << endl;

    // Task 6
    cout << endl;
    cout << "Task 6" << endl;

    const int L = getValueFromUser();

    cout << "Arr: ";
    printarr(arr, COUNT);

    for (int index = 0; index < COUNT; index++) {
        if (arr[index] > L) {
            arr[index] = 5;
        }
    }

    cout << endl;
    cout << "Modified arr: ";
    printarr(arr, COUNT);

    // Task 7
    cout << endl;
    cout << "Task 7" << endl;

    int SUM_THREE = 0;
    for (int index = 0; index < COUNT; index++) {
        // Debug
        // cout << index % 3 << endl;

        if (index % 3 == 0) {
            SUM_THREE += arr[index];
        }
    }

    cout << "Sum of multiples of 3 intems of arr: " << SUM_THREE << endl;

    return 0;
}

int getValueFromUser() {
    cout << "Enter number of items: ";
    int x = 0;
    cin >> x;
    return x;
}

// Buble sort
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

// Print array
void printarr(int arrs[], int c) {
    for (int index = 0; index < c; index++) {
        cout << arrs[index] << " ";
    }
}