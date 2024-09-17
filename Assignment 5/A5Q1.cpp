#include<iostream>
using namespace std;

class Date{
    int day;
    int month;
    int year;

    public:

    Date()
    {
        this->day=0;
        this->month=0;
        this->year=0;
    }
    Date(int day,int month,int year)
    {
        this->day=day;
        this->month=month;
        this->year=year;
    }

    void setDay(int day)
    {
         this->day=day;

    }
    void setMonth(int month)
    {
         this->month=month;
         
    }
    
    void setYear(int year)
    {
         this->year=year;
         
    }

    void acceptDate()
    {
        cout<<"Enter the day"<<endl;
        cin>>this->day;
        
        cout<<"Enter the month"<<endl;
        cin>>this->month;
        
        cout<<"Enter the year"<<endl;
        cin>>this->year;
    }

    void disp()
    {
        cout<<"Date is ="<<day<<"-"<<month<<"-"<<year<<"-"<<endl;
    }};

    class Person{
        string name;
        string address;
        int birthdate;
        Date obj;


        public:
        Person()
        {
            this->name=" ";
            this->address=" ";
            this->birthdate=0;
        }
        Person(string name,string address,int birthdate,int day,int month,int year)
        {
            this->name=name;
            this->address=address;
            this->birthdate=birthdate;
            this->obj.setDay(day);
            this->obj.setMonth(month);
            this->obj.setYear(year);

        }

        void setname(string name)
        {
             this->name=name;
        }
        void setaddress(string address)
        {
            this->address=address;
        }
        void setbirthdate(int birthdate)
        {
             this->birthdate=birthdate;

        }

        void accept()
        {
            cout<<"Enter the name"<<endl;
            cin>>name;
            
            cout<<"Enter the address"<<endl;
            cin>>address;
            cout<<"Enter the birthdate"<<endl;
            this->obj.acceptDate();

            
        }

        void display()
        {
            cout<<"name= "<<name<<"Adress "<<address<<"birthdate="<<birthdate<<endl;
            obj.disp();
        }




        
    };
    int main()
    {
        Person p;
        p.accept();
        p.display();
        return 0;
    }
