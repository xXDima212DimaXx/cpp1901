#include <iostream>

using namespace std;

int main(void) {
    int i;
    int j;
    int num;
    int arr[5][5];

    for (i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        for (j = 0; j < sizeof(arr[0])/sizeof(arr[0][0]); j++) {
            cout << "Row " << i + 1 << ": ";
            cout << "Col " << j + 1 << ": ";
            cin >> num;
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
}
