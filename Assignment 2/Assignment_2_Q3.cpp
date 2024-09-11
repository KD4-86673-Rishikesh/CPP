#include<iostream>
using namespace std;
 
namespace Nstudent{
class Student {
    int Rollno;
    string name;
    int marks;

public:


    void printStudentOnConsole() {
        cout << "Roll Number " << Rollno << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }

    void acceptStudentFromConsole() {
        cout << "Enter the Roll Number of Student : ";
        cin >> Rollno;
        cout << "Enter the  Name of student";
        cin >> name;
        cout << "Enter the marks: ";
        cin >> marks;
    }
    
};
}


int main() {

    Nstudent::Student s1;
    int choice;

    do {
        cout << "Menu:" << endl;
        cout << "1. Accept Student from Console" << endl;
        cout << "2. Print Student" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                s1.acceptStudentFromConsole();
                cout << "Student accepted successfully." << endl;
                break;
            case 2:
                s1.printStudentOnConsole();
                break;
            case 3:
                 cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 3);

    return 0;
}

