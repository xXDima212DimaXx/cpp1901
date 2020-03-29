#include <iostream>
#include "bank.hpp"

using namespace std;

void addClient(std::vector<auto> &clientVec);
void getProperty(std::vector<auto> &propVec);

void aboutClient();
email addEmailAddress();
date getDate();
work getWork();
money getIncome();
credit getCredit();

int main() {
    std::vector<form> clientVec;
    int action;
    cout << "Bank" << endl;
    cout << endl;
    cout << "Select an action" << endl;
    cout << "\t[1] Clients" << endl;
    cout << "\t[2] Register" << endl;
    cout << endl;
    cout << "Your choice: ";
    cin >> action;
    if (action == 1) {
        //
    } else if (action == 2) {
        //
    } else {
        cout << "Please select a valid option" << endl;
    }
    return 0;
}

void addClient(std::vector<auto> &clientVec) {
    form tmp;
    cout << "Registration" << endl;
    cout << endl;
    cout << "Enter your name: ";
    cin >> tmp.name;
    cout << "Enter your surname: ";
    cin >> tmp.surname;
    cout << "Enter your middle name: ";
    cin >> tmp.middlename;
    cout << "Enter your age: ";
    cin >> tmp.age;
    tmp.birthday = getDate();
    tmp.mail = addEmailAddress();
    getProperty(tmp.property);
    cout << "Are you married?: ";
    cin >> tmp.married;
    tmp.income = getIncome();
    tmp.creditsum = getCredit();
    clientVec.push_back(tmp);
}

void aboutClient() {

}

email addEmailAddress() {
    email addr;
    cout << "Enter your email: ";
    cin >> addr.email;
    return addr;
}

date getDate() {
    date b;
    cout << "Your birth date" << endl;
    cout << "Year: ";
    cin >> b.year;
    cout << "Month: ";
    cin >> b.month;
    cout << "Day: ";
    cin >> b.day;
    return b;
}

work getWork() {
    work wplace;
    cout << "Your work place" << endl;
    cout << "House number: " << endl;
    cin >> wplace.house;
    cout << "Street: " << endl;
    cin >> wplace.street;
    cout << "Apartment number: " << endl;
    cin >> wplace.apartment;
    cout << "Zip code: " << endl;
    cin >> wplace.zipcode;
    cout << "City: " << endl;
    cin >> wplace.city;
    cout << "Country: " << endl;
    cin >> wplace.country;
    return wplace;
}

void getProperty(std::vector<auto> &propVec) {
    cout << "Your property" << endl;
    std::string home;
    std::string car;
    cout << "Home: " << endl;
    cin >> home;
    cout << "Car: " << endl;
    cin >> car;
    propVec.push_back(home);
    propVec.push_back(car);
}

money getIncome() {
    money inc;
    cout << "Your income" << endl;
    cout << "Amout: " << endl;
    cin >> inc.amout;
    cout << "Currency: " << endl;
    cin >> inc.currency;
    return inc;
}

credit getCredit() {
    credit cred;
    cout << "Your credit" << endl;
    cout << "Amout: " << endl;
    cin >> cred.summ;
    cout << "Percent: " << endl;
    cin >> cred.percent;
    return cred;
}