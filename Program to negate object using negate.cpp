#include <iostream>
using namespace std;

class Negate{
    public:
        int a, b;
    public:
        Negate(){};
        Negate(int n1, int n2){
            a = n1;
            b = n2;
        }
        void display(){
            cout<<a<<" "<<b<<endl;
        }a
        void operator -(){
            a = -a;
            b = -b;
        }
};

int main(){
    Negate obj1(10, 20);
    cout<<"Obj1 : ";
    obj1.display();
    -obj1;
    cout<<"After : ";
    obj1.display();
    Negate obj2(55, -88);
    cout<<"obj2 : ";
    obj2.display();
    -obj2;
    cout<<"After : ";
    obj2.display();
    Negate obj3;
    obj1;
}
