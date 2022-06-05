#include <iostream>
#include <string>
using namespace std;

class Student{
    public:
        string name;
    public:
        Student(string sname){
            name = sname;
        }
        Student(){
            name = "Unknown";
        }
        void print_name(){
            cout<<"Student name is : "<<name<<endl;
        }
};
int main(){
    Student std1("Anisha");
    Student std2;
    std1.print_name();
    std2.print_name();
    return 0;
}
