#include <iostream>
#include <cstdlib>
#include <limits>

using namespace std;

int main (void)
{
    cout << "Celsius to Fahrenheit" << endl;
    int N = 0;
    int M = 0;
    cout << "From: ";
    cin >> N;
    cout << "To: ";
    cin >> M;

    for (;N < M; N++) {
        cout << N << "°C\t" << (N*1.8)+32 << "°F" << endl;
    }
    return 0;
}