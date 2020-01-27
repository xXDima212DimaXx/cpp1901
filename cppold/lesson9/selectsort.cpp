#include <iostream>
using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort (int arr[], int n)
{
    int min;
    for (int k = 0; k < n-1; k++)
    {
        min = k;
        for (int j = k + 1; j < n; j++)
        {
            if (arr[j] < arr[min]) min = j;
        }
        swap(&arr[min], &arr[k]);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {5, 2, 42, 6, 1, 3, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    printArray(arr, n);
    return 0;
}