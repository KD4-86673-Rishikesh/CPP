#include<iostream>
using namespace std;

class Toolbooth
{
    int payingcount;
    int nonpayingcount;
    double total;
public:
    Toolbooth()
    {
      payingcount=0;
      nonpayingcount=0;
      total=0;
    }
    void Payingcars()
    {
        payingcount++;
        total=total+0.50;
    }
    void NonpayingCars()
    {
       nonpayingcount++;
       
    }
    void PrintColsole()
    {
        cout<<"Details :"<<endl;
        cout<<"Toatal Amount :"<<total<<endl;
        cout<<"Number of Paying Cars:"<<payingcount<<endl;
        cout<<"Number of Non-Paying Cars:"<<nonpayingcount<<endl;

    }

};

int main() 
{

  
    int choice;
    Toolbooth t1;
    do {
        cout << "Menu:" << endl;
        cout << "1.PayingCar" << endl;
        cout << "2.NonPayingCar" << endl;
        cout << "3.Print the details." << endl;
         cout << "4.Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        int area; 
 

        switch (choice) {
            case 1:
             {
               t1.Payingcars();
               cout<<"Data Added for paying car"<<endl;
             }
            break;
            case 2:
            {
               t1.NonpayingCars();
               cout<<"Data Added for Non paying car"<<endl;
            }
            
            break;
            case 3:
            {
                 t1.PrintColsole();
            }
            case 4:cout<<"Exiting program........";
                  break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}