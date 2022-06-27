#include <iostream>
using namespace std;

class Shape{
    public:
        virtual void area(){
            cout << "Shape class !" <<endl;
        }
};
class Triangle:public Shape{
    int b, h;
    float res;
    public:
        Triangle(){};
        Triangle(int a1,int a2){
            b = a1;
            h = a2;
        }
        void area(){
            res = 0.5*b*h;
            cout<<res<<endl;
        } 
};
class Rectangle:public Shape{
    int l, b;
    float res;
    public:
        Rectangle(){};
        Rectangle(int b1,int b2){
            l = b1;
            b = b2;
        }
        void area(){
            res = l*b;
            cout<<res<<endl;
        }
};
int main(){
    Shape sh;
    Triangle tr(10, 20);
    Rectangle re(5, 8);
    Shape *shptr1, *shptr2;
    shptr1 = &tr;
    shptr1->area();
    shptr2 = &re;
    shptr2->area();
}