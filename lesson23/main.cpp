#include <iostream>
#include <fstream>
#include <limits>
#include "struct.hpp"
using namespace std;

string get_name(person man)
{
    return man.name;
}

int main() {
    person vasiliy;
    vasiliy.name = "Valiliy";
    vasiliy.age = 21;
    vasiliy.height = 180;
    vasiliy.weigth = 99;
    vasiliy.country = "Russia";
    vasiliy.married = false;

    person ivan = {"Ivan", 20, 170, 80, "Ukraine", true};

    /* cout << "[" << endl;
    cout << "\t{" << endl;
    cout << "\t\t\"Name\"" << ":\"" << ivan.name << "\"" << endl;
    cout << "\t}," << endl;
    cout << endl;
    cout << "\t{" << endl;
    cout << "\t\t\"Name\"" << ":\"" << vasiliy.name << "\"" << endl;
    cout << "\t}" << endl;
    cout << "]" << endl; */

    person people[3];
    people[0] = {"Micha", 15, 172, 70, "Ukraine", true};
    people[1] = {"Andrew", 14, 167, 69, "Slovak", false};
    people[2] = {"Dima", 20, 176, 80, "Usa", true};

    for (int i = 0; i < 3; i++) {
        cout << "[" << endl;
        cout << "\t{" << endl;
        cout << "\t\t\"Name\"" << ":\"" << people[i].name << "\"" << endl;
        cout << "\t\t\"Name\"" << ":\"" << get_name(people[i]) << "\"" << endl;
        cout << "\t}";

        if (i < 2) {
            cout << "," << endl;
        }

        cout << endl;
    }

    cout << "]" << endl;
    cout << endl;

    cout << get_name(ivan) << endl;



    // CARS DATABASE




    int cars_num = 2;

    car cars[cars_num];

    // Get Cars
    for (int i = 0; i < cars_num; i++) {
        cout << "-----------------------------" << endl;
        cout << "            Car " << i + 1 << endl;
        cout << "-----------------------------" << endl;

        cout << "Marka: ";
        cin >> cars[i].marka;

        if ((cin.fail() == 0)) {
            // Continue executing
        } else {
            // Terminate and show error
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Please enter valid value!" << endl;
            return -1;
        }

        cout << "Speed: ";
        cin >> cars[i].speed;

        if ((cin.fail() == 0)) {
            // Continue executing
        } else {
            // Terminate and show error
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Please enter valid value!" << endl;
            return -1;
        }

        cout << "Type: ";
        cin >> cars[i].type;

        if ((cin.fail() == 0)) {
            // Continue executing
        } else {
            // Terminate and show error
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Please enter valid value!" << endl;
            return -1;
        }
    }

    cout << endl;
    cout << "-----------------------------" << endl;
    cout << "        Cars database        " << endl;
    cout << "-----------------------------" << endl;
    cout << endl;
    cout << "[" << endl;
    for (int i = 0; i < cars_num; i++) {
        cout << "\t{" << endl;
        cout << "\t\t\"Marka\":\"" << cars[i].marka << "\"," << endl;
        cout << "\t\t\"Speed\":\"" << cars[i].speed << "\"," << endl;
        cout << "\t\t\"Type\":\"" << cars[i].type << "\"" << endl;
        cout << "\t}";

        if (i < (cars_num - 1)) {
            cout << "," << endl;
        }

        cout << endl;
    }

    cout << "]" << endl;
    cout << endl;


    ofstream db;
    db.open("cars.json");
    if (db.is_open())
    {
        db << "[" << endl;
        for (int i = 0; i < cars_num; i++) {
            db << "\t{" << endl;
            db << "\t\t\"Marka\":\"" << cars[i].marka << "\"," << endl;
            db << "\t\t\"Speed\":\"" << cars[i].speed << "\"," << endl;
            db << "\t\t\"Type\":\"" << cars[i].type << "\"" << endl;
            db << "\t}";

            if (i < (cars_num - 1)) {
                db << "," << endl;
            }

            db << endl;
        }

        db << "]";

        db.close();
    } else {
        cout << "Unable to open file";
    }

    return 0;
}

//eof