#include<iostream>
using namespace std;

class Time{
int h;
int m;
int s;

public:
Time()
{
    h=0;
    m=0;
    s=0;
}
Time(int h,int m,int s)
{
    this->h=h;
    this->m=m;
    this->s=s;
}

void setHour(int h)
{
    this->h=h;
}
void setMinutes(int m)
{
    this->m=m;
}
void setSecond(int s)
{
    this->s=s;
}

int getHour()
{
    return h;
}
int getMinute()
{
    return m;
}
int getSecond()
{
    return s;
}
void accept()
{
    cout<<"Enter the hour="<<endl;
    cin>>h;
    
    cout<<"Enter the minute="<<endl;
    cin>>m;

    cout<<"Enter the Second="<<endl;
    cin>>s;

}
void disp()
{
    cout<<"Your time is="<<" hours ="<<h<<"Minutes is ="<<m<<"Seconds is"<<s<<endl;

}
};
int main()
{
            Time t;
           Time **ptr  =new  Time *[5];  

          
            for(int i=0;i<5;i++)
            {
                ptr[i]=new Time();
                ptr[i]->accept();
            }

             for(int i=0;i<5;i++)
            {

                ptr[i]->disp();
            }
             for(int i=0;i<5;i++)
             {
                 delete ptr[i];
                 ptr[i]=NULL;
             }



}

