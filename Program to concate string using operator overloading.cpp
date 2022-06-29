#include <iostream>
#include <cstring>
using namespace std;

class Overload{
    public:
        char a[10], b[10];
    public:
        void getv(){
            cin>>a;
            cin>>b;
        }
        void operator +(){
            strcat(a, b);
            cout<<a<<endl;
        }
};

int main(){
    Overload obj1;
    obj1.getv();
    cout<<"Obj1 : ";
    +obj1;
    Overload obj2;
    obj2.getv();
    cout<<"obj2 : ";
    +obj2;
}
