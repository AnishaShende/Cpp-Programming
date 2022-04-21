#include <iostream>
using namespace std;

class ECI{
    public:
        void display(){
            cout<<"------Welcome to ECI------"<<endl;
            cout<<"Party 1 : Congress"<<endl;
            cout<<"Party 2 : BJP"<<endl;
            cout<<"Party 3 : AAP"<<endl;
        }
};
class Pune{
    public:
    int ap1, ap2, ap3, anota, avttl;
    public:
        void adisplay(){
            do{
                cout<<"Enter votes for Congress in pune : ";
                cin>>ap1;
                cout<<"Enter votes for BJP in pune : ";
                cin>>ap2;
                cout<<"Enter votes for AAP in pune : ";
                cin>>ap3;
                cout<<"Enter votes for NOTA in pune : ";
                cin>>anota;
                avttl = ap1 + ap2 + ap3 + anota;
                cout<<"Values entered are : "<<ap1<<" "<<ap2<<" "<<ap3<<" "<<anota<<endl;
            }
            while(avttl != 1000);
        }
    
};
class Nagpur{
    public:
    int bp1, bp2, bp3, bnota, bvttl;
    public:
        void bdisplay(){
            do{
                cout<<"Enter votes for Congress in nagpur : ";
                cin>>bp1;
                cout<<"Enter votes for BJP in nagpur : ";
                cin>>bp2;
                cout<<"Enter votes for AAP in nagpur : ";
                cin>>bp3;
                cout<<"Enter votes for NOTA in nagpur : ";
                cin>>bnota;
                bvttl = bp1 + bp2 + bp3 + bnota;
                cout<<"Values entered are : "<<bp1<<" "<<bp2<<" "<<bp3<<" "<<bnota<<endl;
            }
            while(bvttl != 1000);
        }
};
class Nashik{
    public:
    int cp1, cp2, cp3, cnota, cvttl;
    public:
        void cdisplay(){
            do{
                cout<<"Enter votes for Congress in nashik : ";
                cin>>cp1;
                cout<<"Enter votes for BJP in nashik : ";
                cin>>cp2;
                cout<<"Enter votes for AAP in nashik : ";
                cin>>cp3;
                cout<<"Enter votes for NOTA in nashik : ";
                cin>>cnota;
                cvttl = cp1 + cp2 + cp3 + cnota;
                cout<<"Values entered are : "<<cp1<<" "<<cp2<<" "<<cp3<<" "<<cnota<<endl;
            }
            while(cvttl != 1000);
        }
};
class Winning:public Pune, public Nagpur, public Nashik{
    public:
    int p1ttl, p2ttl, p3ttl, notattl;
    public:
        void windisplay(){
            p1ttl = ap1+bp1+cp1;
            p2ttl = ap2+bp2+cp2;
            p3ttl = ap3+bp3+cp3;
            notattl = anota+bnota+cnota;
            cout<<"P1ttl = "<<p1ttl<<endl;
            cout<<"P2ttl = "<<p2ttl<<endl;
            cout<<"P3ttl = "<<p3ttl<<endl;
            cout<<"notattl = "<<notattl<<endl;
            if(p1ttl >= p2ttl && p1ttl >= p3ttl){
                cout<<"Winning party in maharashtra is Congress with "<<p1ttl<<" votes with the winning percentage of "<<p1ttl/3000*100<<"%"<<endl;
            }
            else if(p2ttl >= p1ttl && p2ttl >= p3ttl){
                cout<<"Winning party in maharashtra is BJP with "<<p2ttl<<" votes with the winning percentage of "<<p2ttl/3000*100<<"%"<<endl;
            }
            else if(p3ttl >= p1ttl && p3ttl >= p2ttl){
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
    obj1.adisplay();
    obj2.bdisplay();
    obj3.cdisplay();
    objwin.windisplay();
    return 0;
}
