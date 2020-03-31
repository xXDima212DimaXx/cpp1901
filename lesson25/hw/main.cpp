#include <iostream>
#include "bank.hpp"

using namespace std;

void addClient(std::vector<auto> &clientVec);
void getProperty(std::vector<auto> &propVec);

void aboutClient(std::vector<auto> &clientVec, int pos);
void showClients(std::vector<auto> &clientVec);
email addEmailAddress();
date getDate();
work getWork();
money getIncome();
credit getCredit();
void menu(std::vector<auto> &clientVec);

int main() {
    std::vector<form> clientVec;
    menu(clientVec);
    return 0;
}

void menu(std::vector<auto> &clientVec) {
    int action;
    cout << "-----------------------" << endl;
    cout << "Bank" << endl;
    cout << "-----------------------" << endl;
    cout << endl;
    cout << "Select an action" << endl;
    cout << "\t[1] Clients" << endl;
    cout << "\t[2] Register" << endl;
    cout << "\t[3] Exit" << endl;
    cout << endl;
    cout << "-----------------------" << endl;
    cout << "Your choice: ";
    cin >> action;
    if (action == 1) {
        cout << "-----------------------" << endl;
        showClients(clientVec);
    } else if (action == 2) {
        cout << "-----------------------" << endl;
        addClient(clientVec);
    } else if (action == 3) {
        cout << "-----------------------" << endl;
        exit(0);
    } else {
        cout << "-----------------------" << endl;
        cout << "Please select a valid option" << endl;
        cout << "-----------------------" << endl;
        menu(clientVec);
    }
}

void addClient(std::vector<auto> &clientVec) {
    form tmp;
    cout << "-----------------------" << endl;
    cout << "Registration" << endl;
    cout << "-----------------------" << endl;
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
    cout << "-----------------------" << endl;
    cout << "Your information" << endl;
    cout << "-----------------------" << endl;
    aboutClient(clientVec, clientVec.size()-1);
    cout << "-----------------------" << endl;
    cout << "Thank you for registration" << endl;
    cout << "-----------------------" << endl;
    menu(clientVec);
}

void aboutClient(std::vector<auto> &clientVec, int pos) {
    form client = clientVec.at(pos);
    cout << "-----------------------" << endl;
    cout << "About client" << endl;
    cout << "-----------------------" << endl;
    cout << "Name: " << client.name << endl;
    cout << "Surname: " << client.surname << endl;
    cout << "Middle name: " << client.middlename << endl;
    cout << "Age: " << client.age << endl;
    cout << "Birthday: " << client.birthday.year << "/" << client.birthday.month << "/" << client.birthday.day << endl;
    cout << "Email: " << client.mail.email << endl;
    cout << "Is married: " << client.married << endl;
    double mon = client.creditsum.summ/12;
    // cout << "Mon: " << mon << endl;
    double per = mon/100*client.creditsum.percent;
    // cout << "Per: " << per << endl;
    double payment = mon+per;
    cout << "Monthly payment: " << payment << endl;
}

void showClients(std::vector<auto> &clientVec) {
    cout << "-----------------------" << endl;
    cout << "Our clients" << endl;
    cout << "-----------------------" << endl;
    for (int i = 0; i < clientVec.size(); i++) {
        aboutClient(clientVec, i);
        cout << endl;
    }
    menu(clientVec);
}

email addEmailAddress() {
    email addr;
    cout << "Enter your email: ";
    cin >> addr.email;
    return addr;
}

date getDate() {
    date b;
    cout << "-----------------------" << endl;
    cout << "Your birth date" << endl;
    cout << "-----------------------" << endl;
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
    cout << "-----------------------" << endl;
    cout << "Your work place" << endl;
    cout << "-----------------------" << endl;
    cout << "House number: ";
    cin >> wplace.house;
    cout << "Street: ";
    cin >> wplace.street;
    cout << "Apartment number: ";
    cin >> wplace.apartment;
    cout << "Zip code: ";
    cin >> wplace.zipcode;
    cout << "City: ";
    cin >> wplace.city;
    cout << "Country: ";
    cin >> wplace.country;
    return wplace;
}

void getProperty(std::vector<auto> &propVec) {
    cout << "-----------------------" << endl;
    cout << "Your property" << endl;
    cout << "-----------------------" << endl;
    std::string home;
    std::string car;
    cout << "Home: ";
    cin >> home;
    cout << "Car: ";
    cin >> car;
    propVec.push_back(home);
    propVec.push_back(car);
}

money getIncome() {
    money inc;
    cout << "-----------------------" << endl;
    cout << "Your income" << endl;
    cout << "-----------------------" << endl;
    cout << "Amout: ";
    cin >> inc.amout;
    cout << "Currency: ";
    cin >> inc.currency;
    return inc;
}

credit getCredit() {
    credit cred;
    cout << "-----------------------" << endl;
    cout << "Your credit" << endl;
    cout << "-----------------------" << endl;
    cout << "Amout: ";
    cin >> cred.summ;
    cout << "Percent: ";
    cin >> cred.percent;
    return cred;
}