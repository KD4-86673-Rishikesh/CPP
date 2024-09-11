#include<iostream>
using namespace std;

class Date {
    int date;
    int month;
    int year;

public:
    void initDate() {
        date = 1;
        month = 1;
        year = 1900;
    }

    void printDateOnConsole() {
        cout << "Date: " << date << endl;
        cout << "Month: " << month << endl;
        cout << "Year: " << year << endl;
    }

    void acceptDateFromConsole() {
        cout << "Enter the date: ";
        cin >> date;
        cout << "Enter the month: ";
        cin >> month;
        cout << "Enter the year: ";
        cin >> year;
    }
    int Getyear() {
        return year;
    }

    bool isLeapYear() {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            return true;
        } else {
            return false;
        }
    }
};

int main() {
    Date d1;
    int choice;

    do {
        cout << "Menu:" << endl;
        cout << "1. Initialize Date" << endl;
        cout << "2. Accept Date from Console" << endl;
        cout << "3. Print Date" << endl;
        cout << "4. Check if Leap Year" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                d1.initDate();
                cout << "Date initialized successfully." << endl;
                break;
            case 2:
                d1.acceptDateFromConsole();
                cout << "Date accepted successfully." << endl;
                break;
            case 3:
                d1.printDateOnConsole();
                break;
            case 4:
                if (d1.isLeapYear()) {
                    cout << "The year " << d1.Getyear() << " is a leap year." << endl;
                } else {
                    cout << "The year " << d1.Getyear() << " is not a leap year." << endl;
                }
                break;
            case 5:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}


