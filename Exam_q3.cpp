// Program to display birthday using pointer to array of objects

#include <iostream>
using namespace std;

class Time{
    int hrs;
    int min;
    int sec;
    public:
        Time(int h, int m, int s){
            hrs = h;
            min = m;
            sec = s;
        }
        void display(){
            cout<<"Time is : "<<hrs<<":"<<min<<":"<<sec<<endl;
        }
};
int main(){
    Time obj1(12, 30, 90);
    Time obj2(05, 05, 50);
    obj1.display();
    obj2.display();
    return 0; 
}