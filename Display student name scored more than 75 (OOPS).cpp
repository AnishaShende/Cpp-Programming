#include <iostream>

using namespace std;

class student{
    char name[20];
    int id;
    float per;
    public:
        void gd();
};
void student :: gd(){
    cout<<"Enter name : ";
    cin>>name;
    cout<<"Enter id : ";
    cin>>id;
    cout<<"Enter percentage : ";
    cin>>per;
    if(per >= 75){
        cout<<"Student name is : "<<name<<endl;
        cout<<"Student Id is : "<<id<<endl;
        cout<<"Student's percentage are : "<<per<<"%"<<endl;
    }
}
int main()
{
    student s1, s2, s3, s4, s5;
    s1.gd();
    s2.gd();
    s3.gd();
    s4.gd();
    s5.gd();
    return 0;
}
