#include <iostream>
using namespace std;

class ECI{
    public:
        void display(){
            cout<<"Welcome to ECI"<<endl;
            cout<<"Party 1 : Congress"<<endl;
            cout<<"Party 2 : BJP"<<endl;
            cout<<"Party 3 : AAP"<<endl;
        }
};
class Pune{
    public:
    int p1, p2, p3, nota, vttl;
    public:
        void display(){
            do{
                cout<<"Enter votes for Congress in pune : ";
                cin>>p1;
                cout<<"Enter votes for BJP in pune : ";
                cin>>p2;
                cout<<"Enter votes for AAP in pune : ";
                cin>>p3;
                cout<<"Enter votes for NOTA in pune : ";
                cin>>nota;
                vttl = p1 + p2 + p3 + nota;
            }
            while(vttl != 1000);
        }
    
};
class Nagpur{
    public:
    int p1, p2, p3, nota, vttl;
    public:
        void display(){
            do{
                cout<<"Enter votes for Congress in nagpur : ";
                cin>>p1;
                cout<<"Enter votes for BJP in nagpur : ";
                cin>>p2;
                cout<<"Enter votes for AAP in nagpur : ";
                cin>>p3;
                cout<<"Enter votes for NOTA in nagpur : ";
                cin>>nota;
                vttl = p1 + p2 + p3 + nota;
            }
            while(vttl != 1000);
        }
};
class Nashik{
    public:
    int p1, p2, p3, nota, vttl;
    public:
        void display(){
            do{
                cout<<"Enter votes for Congress in nashik : ";
                cin>>p1;
                cout<<"Enter votes for BJP in nashik : ";
                cin>>p2;
                cout<<"Enter votes for AAP in nashik : ";
                cin>>p3;
                cout<<"Enter votes for NOTA in nashik : ";
                cin>>nota;
                vttl = p1 + p2 + p3 + nota;
            }
            while(vttl != 1000);
        }
};
class Winning:public Pune, public Nagpur, public Nashik{
    public:
    int p1ttl, p2ttl, p3ttl, notattl;
    public:
        void display(){
            p1ttl = Pune::p1+Nagpur::p1+Nashik::p1;
            p2ttl = Pune::p2+Nagpur::p2+Nashik::p2;
            p3ttl = Pune::p3+Nagpur::p3+Nashik::p3;
            notattl = Pune::nota+Nagpur::nota+Nashik::nota;
            if(p1ttl >= p2ttl && p1ttl >= p3ttl){
                cout<<"Winning party in maharashtra is Congress with "<<p1ttl<<" votes with the winning percentage of "<<p1ttl/3000*100<<"%"<<endl;
            }
            else if(p2ttl >= p1ttl && p2ttl >= p3ttl){
                cout<<"Winning party in maharashtra is BJP with "<<p2ttl<<" votes with the winning percentage of "<<p2ttl/3000*100<<"%"<<endl;
            }
            else if(p2ttl >= p1ttl && p3ttl >= p3ttl){
                cout<<"Winning party in maharashtra is AAP with "<<p3ttl<<" votes with the winning percentage of "<<p3ttl/3000*100<<"%"<<endl;
            }
            else{
                cout<<"NOTA is winner with "<<notattl<<" votes with the winning percentage of "<<notattl/3000*100<<"%"<<endl;
            }
        }
};

int main()
{
    ECI obj;
    Pune obj1;
    Nagpur obj2;
    Nashik obj3;
    Winning objwin;
    obj.display();
    obj1.display();
    obj2.display();
    obj3.display();
    objwin.display();
    return 0;
}
