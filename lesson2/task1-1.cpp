#include <iostream>

using namespace std;

int main(void) {
    int arr[5][5] = {{0, 1, 2, 3, 4}, {1, 2, 3, 4, 5}, {2, 3, 4, 5, 6}, {3, 4, 5, 6, 7}, {4, 5, 6, 7, 8}};

    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        for (int j = 0; j < sizeof(arr[0])/sizeof(arr[0][0]); j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}
