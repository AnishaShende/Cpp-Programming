#include <iostream>
using namespace std;

class Student{
    public:
        char name[10], address[10];
        int postalCode, enrNumber;
    public:
        Student(){
            cout<<"Student constructor called !"<<endl;
            cout<<"Enter student's name : ";
            cin>>name;
            cout<<"Enter student's enrollment number : ";
            cin>>enrNumber;
            cout<<"Enter student's address : ";
            cin>>address;
            cout<<"Enter student's postal code : ";
            cin>>postalCode;
            cout<<"Student's name is : "<<name<<endl;
            cout<<"Student's enrollment number is : "<<enrNumber<<endl;
            cout<<"Student's address is : "<<address<<endl;
            cout<<"Student's postal code is : "<<postalCode<<endl;
        }
        ~Student(){
            cout<<"Student's destructor called !"<<endl;
        }
};
int main(){
    Student stud;
    return 0;
}
