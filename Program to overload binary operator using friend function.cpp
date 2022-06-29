#include <iostream>
using namespace std;

class Derived;
class Base{
    private:
        int num1;
    public:
        Base(){
            num1 = 0;
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
            num2 = 1;
        }
        void display(){
            cout<<"Num2 = "<<num2<<endl;
        }
        friend void swap(Base *num1, Derived *num2);
};
void swap(Base *no1, Derived *no2){
    int no3;
    no3 = no1->num1;
    no1->num1 = no2->num2;
    no2->num2 = no3;
}
int main(){
    Base b; 
    Derived d;
    b.display();
    d.display();
    swap(&b,&d);
    b.display();
    d.display();
    return 0;
}
