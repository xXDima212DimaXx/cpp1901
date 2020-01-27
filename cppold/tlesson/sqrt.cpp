#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

int mt(int a, int b, int c);

int main()
{
    int f;
    int s;
    int t;
    cout << "Введите значение a: ";
    cin >> f;
    cout << "Введите значение b: ";
    cin >> s;
    cout << "Введите значение c: ";
    cin >> t;

    /*string line;

    ifstream file2 ("data.dat");
    if (file2.is_open())
    {
        while (getline(file2, line))
        {
            cout << line << endl;
        }
        file2.close();
    }
    else cout << "unable to open file";*/
    mt(f, s, t);

    return 0;
}

int mt(int a, int b, int c)
{
    int x;
    if((b*b - 4*a*c) >= 0) //Если дискриминант больше или равен 0
    {
        x = ( -1*b + sqrt(b*b - 4*a*c) ) / (2 * a);
        cout << "x1 = " << x << endl;
        x = ( -1*b - sqrt(b*b - 4*a*c) ) / (2 * a);
        cout << "x2 = " << x << endl;
    }
    else
    {
        cout << "Уравнение не имеет корней" << endl;
    }
}