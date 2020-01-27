#include <iostream>
#include <string.h>
#include <cstring>

using namespace std;

int main()
{
    char surname[20];
    char name[5] = {'V', 'l', 'a', 'd'};
    char name1[5] = {'V', 'l', 'a', 'd', '\0'};
    char name2[] = "Ivan";

    cout << strlen(name) << endl;
    cout << name << endl;
    cout << strlen(name1) << endl;
    cout << name1 << endl;

    return 0;
}