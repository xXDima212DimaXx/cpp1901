#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main () {
    string text;
    char word[100];
    long nWords = 0;
    bool bInput = true;
    char symbol = 0;
    cout<<"Enter text: ";
    while(bInput)
    {
        symbol = cin.get();
        if(symbol != '\n')
            text += symbol;
        else
            bInput = false;
    }
    stringstream ss(text);
    while(ss>>word) {
        int size = 0;
        for (int i = 0; i < sizeof(word); i++) {
            if (!word[i]) {
                size++;
            }
        }

        int w = size-1;
        cout << w << endl;
        if (word[w] == ',') {
            nWords++;
            cout << word << endl;
        }
    }
    cout<<"Number of words in text : "<<nWords<<endl;
    // cin.get();
    return 0;
}