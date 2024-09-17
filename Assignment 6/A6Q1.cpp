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
    int getDay()
    {
        return day;
    }
     int getMonth()
    {
        return month;
    }
     int getYear()
    {
        return year;
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
        

       virtual void accept()
        {
            cout<<"Enter the name"<<endl;
            cin>>name;
            
            cout<<"Enter the address"<<endl;
            cin>>address;
            cout<<"Enter the birthdate"<<endl;
            this->obj.acceptDate();

            
        }

       virtual void display()
        {
            cout<<"name= "<<this->name<<"Adress "<<this->address<<"birthdate="<<this->birthdate<<endl;
            obj.disp();
        }};

        class Emp: public Person{
            int id;
            int sal;
            string dept;
            Date doj;//Association (composition)
            public:
            Emp()
            {
                int id=0;
                int sal=0;
                string dept =" ";

            }
            Emp(int id,int sal,string dept,int day,int month,int year)
            {
                this->id=id;
                this->sal=sal;
                this-> dept=dept;
                this->doj.setDay(day);
                this->doj.setMonth(month);
                this->doj.setYear(year);
            }

            void setId(int id)
            {
                this->id=id;

            }

            void setSal(int sal)
            {
                this->sal=sal;
            }

            void setDept(string dept)
            {
                this-> dept=dept;
            }

            int getId()
            {
                return id;
            }
            int getsal()
            {
                return sal;
            }
            string getDept()
            {
                return dept;
            }

            void acceptemp()
            {
                cout<<"Enter the id"<<endl;
                cin>>id;
                cout<<"Enter the Salary"<<endl;
                cin>>sal;
                cout<<"Enter the Dept"<<endl;
                cin>>dept;
                cout<<"Enter the joining date"<<endl;
                
                
                doj.acceptDate();
                Person ::accept();
                
            }

            void printEmp()
            {
                cout<<"Your id= "<<id<<"Your salary = "<<sal<<"Your Dept = "<<dept<<endl;
                doj.disp();
                Person::display();
            }

            


        };




        
    
    int main()
    {
        Emp e;
        e.acceptemp();
        e.printEmp();
        


        

        
        return 0;
    }
