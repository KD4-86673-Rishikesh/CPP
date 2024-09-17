#include<iostream>
using namespace std;

class student{
    string name;
    string gender;
    const int rollno;
    int static generate_rollno;
    int arr[3];
    public:
        student():rollno(++generate_rollno)
        {



        }

        
        student(string name,string gender,int arr[3]):rollno(++generate_rollno)
        {
            this->name=name;
            this->gender=gender;
            
            this->arr[3]=arr[3];
            
        } 

        void accept(){
            cout<<"enter the name - ";
            cin>>name;
            
            cout<<"enter the gender - ";
            cin>>gender;

            for(int i=0;i<3;i++){
                cout<<"enter the marks - ";
                cin>>arr[i];

            }

        }

        void display(){
            cout<<"the name is - "<<name<<endl;
            cout<<"the gender is - "<<gender<<endl;
            cout<<"the rollno is - "<<rollno<<endl;
            
            for(int i=0;i<3;i++){
                cout<<"the marks are - "<<endl;
                cout<<arr[i];
            }

        }
       int percentage(int arr[3])
       {int p,q;
        p=arr[0]+arr[1]+arr[2];
        q=(p/3)*100;
        return q;
       }

        int getRollno(){
            return rollno;
        }};
        int student::generate_rollno = 0;

int search(student**ptr){
    int rollno;
    cout<<"enter the rollno - "<<endl;
    cin>>rollno;

    for(int i = 0;i<2;i++){
        if(rollno==ptr[i]->getRollno()){
            return i;
        }
        
    } return -1;

}


int main(){

    student **ptr = new student *[2];

    for(int i = 0;i<2;i++){
        ptr[i]=new student();
        ptr[i]->accept();
        //ptr[i]->display();
        
    };

    int index = search(ptr);

    if(index !=-1){
        ptr[index]->display();
    }else
    cout<<"not found";    
    
}