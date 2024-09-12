#include<iostream>
using namespace std;
class Address{

        string building;
        string street;
        string city;
        int pin;

        public:
        Address()
        {
            building=" ";
            street=" ";
            city=" ";
            pin=0;
        }

        void setAddress(string b,string s,string c,int p)
        {
            building=b;
            street=s;
            city=c;
            pin=p;

        }

        string getBuilding()
        {
            return building;

        }
        string getStreet()
        {
            return street;
        }
        string getcity()
        {
            return city;
        }
        int getPin()
        {
            return pin;
        }



        void accept()
        {
            cout<<"Enter Address:=  "<<endl;
            getline(cin,building);
            getline(cin,street);
            getline(cin,city);
            cin>>pin;
        }

        void display()
        {
            cout<<"your address is building="<<building<<"street= "<<street<<"city=  "<<city<<"pin=  "<<pin;
        }
        };


        int main()
        {
            Address a;
            a.accept();
            a.display();
            return 0;
        }