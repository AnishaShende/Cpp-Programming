#include <iostream>
using namespace std;

class Derived;
class Base{
    private:
        int num1;
    public:
        Base(){
            num1 = 100;
        }
        void display(){
            cout<<"Num1 = "<<num1<<endl;
        }
        friend void swap(Base *num1, Derived *num2);
};
class Derived:public Base{
    private:
        int num2;
    public:
        Derived(){
            num2 = 500;
        }
        void display(){
            cout<<"Num2 = "<<num2<<endl;
        }
        friend void swap(Base *num1, Derived *num2);
};
void swap(Base *no1, Derived *no2){
    if (no1->num1 > no2->num2)
    {
        cout<<no1->num1<<endl;
    }
    else{
        cout<<no2->num2<<endl;
    }
}
int main(){
    Base b; 
    Derived d;
    b.display();
    d.display();
    swap(&b,&d);
    return 0;
}
