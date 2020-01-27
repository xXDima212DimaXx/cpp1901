// #include <iostream>
// #include <cstdlib>
// #include <ctime>

// using namespace std;

// void swap(int *a, int *b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// void printArray(int arr[], int size) {
//     for (int i =0; i < size; i++)
//         cout << arr[i] << " ";
// }

// void quickSort(int arr[], int l, int r)
// {
//     int left = l;
//     int right = r-1;
//     int size = r - l;
//     int number = arr[rand() % size + l];
//     if (size > 1)
//     {
//         while (l < r)
//         {
//             while(arr[r] > number && r > l)
//             {
//                 r--;
//             }
//             while(arr[l] < number && l <= r)
//             {
//                 l++;
//             }
//             if (l < r)
//             {
//                 swap(arr[l], arr[r]);
//                 l++;
//             }
//         }
//         quickSort(arr, l, left);
//         quickSort(arr, right, r);
//     }
// }

// int main(void)
// {
//     int arr[] = {1, 5, 3, 6, 8, 2, 10};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     printArray(arr, n);
//     quickSort(arr, 0, n-1);
//     cout << endl;
//     printArray(arr, n);

//     return 0;
// }

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void QuickSort(int *arr, int left, int right)
{
    int l = left;
    int r = right - 1;
    int size = right - left;

    if(size > 1)
    {
        int pivot = arr[rand() % size + l];
        while(l < r)
        {
            while(arr[r] > pivot && r > l)
            {
                r--;
            }

            while(arr[l] < pivot && l <= r)
            {
                l++;
            }

            if(l < r)
            {
                swap(arr[l], arr[r]);
                l++;
            }
        }
        QuickSort(arr, left, l);
        QuickSort(arr, r, right);
    }
}

//Create a random array
int* makeRandomArray(int size)
{
    int* array = new int[size];

    srand(time(NULL));

    for (int i = 0; i < size; i++)
    {
        array[i] = (100.0 * rand()) / RAND_MAX;
    }

    return array;
}

void printArray(int *arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size = 10;

    int *array = makeRandomArray(size);

    printArray(array, size);
    QuickSort(array, 0, size);
    printArray(array, size);

    delete [] array;

    return 0;
}