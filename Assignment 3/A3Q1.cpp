#include<iostream>
using namespace std;

class vol{
    int l;
    int w;
    int b;

    public:
    vol()
    {
        l=1;
        w=1;
        b=1;
           
    }
    vol(int x,int y,int z)

    {
        l=x;
        b=y;
        w=z;
       
    }
    vol(int d)
    {
        l=d;
        w=d;
        b=d;
        cout<<"Your vloume is"<<d*d*d;
       

    }
    void disp()
    {
        cout<<"volume is= "<<l*w*b<<endl;
    }
    
    
    void accpt()
    {
        cout<<"Enter the values "<<endl;
        cin>>l>>w>>b;
    }
};
    int menu()
    {
        int choice;
        
        cout<<"0.Exit"<<endl;
        cout<<"1.Calculate volume with default values"<<endl;
        cout<<"2.Calculate with same values "<<endl;
        cout<<"3.Calculate with Differet values"<<endl;
        cin>>choice;
        return choice; 
    }
    

   

    int main()
    {
        int choice;
        

        while((choice=menu())!=0)
        {
            switch(choice)
            {
                case 1:
                {
                    vol v;
                    v.disp();
                    break;
                }

                case 2:
                 
                    int n;
                    cout<<"Enter the values "<<endl;
                    cin>>n;
                    cout<<"volume is= "<<n*n*n;
                 
                break;
                
                case 3:
                {
                
                    vol v2;
                    v2.accpt();
                    v2.disp();
                     break;
                }
                

                

            }
        }
    }



