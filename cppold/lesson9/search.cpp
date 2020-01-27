#include <iostream>
using namespace std;

int linSearch(int arr[], int n, int x)
{
 for (int i = 0; i < n; i++)
 {
  if (arr[i] == x)
  {
   return i;
  }
 }
 return -1;
}

int main(void)
{
 int arr[] = {12, 5, 43, 76, 93};

 int x;

 cout << "Enter value: ";
 cin >> x;

 int n = sizeof(arr)/sizeof(arr[0]);

 int result = linSearch(arr, n-1, x);

 if(result == -1)
  cout << "Element not found\n";
 else
  cout << "Element found at index: " << result << endl;
 return 0;
}