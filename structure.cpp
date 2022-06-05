#include <iostream>
#include <string>
using namespace std;

struct Student{
    int age, rollNo, marks;
    string name;
};
int main(){
    Student s1;
    cout<<"Enter the student name : ";
    cin>>s1.name;
    cout<<"Enter the student age : ";
    cin>>s1.age;
    cout<<"Enter the student roll number : ";
    cin>>s1.rollNo;
    cout<<"Enter the student marks : ";
    cin>>s1.marks;
    cout<<"Student name is : "<<s1.name<<endl;
    cout<<"Student age is : "<<s1.age<<endl;
    cout<<"Student roll number is : "<<s1.rollNo<<endl;
    cout<<"Student marks are : "<<s1.marks<<endl;
    return 0;
}
