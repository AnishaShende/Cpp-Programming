#include <iostream>

using namespace std;

class info{
    public:
    int sid, fid;
    float fsalary;
    char sname[50], sbranch[50], fname[50], fbranch[50];
    public:
        void data(char [], int, char []);
        void data(char [], int, float, char []);
};
void info::data(char sname[50], int sid, char sbranch[50]){
    cout<<"Name of the student is : "<<sname<<endl;
    cout<<"ID of the student is : "<<sid<<endl;
    cout<<"Branch of the student is : "<<sbranch<<endl;
}
void info::data(char fname[50], int fid, float fsalary, char fbranch[50]){
    cout<<"Name of the faculty is : "<<fname<<endl;
    cout<<"ID of the faculty is : "<<fid<<endl;
    cout<<"Salary of the faculty is : "<<fsalary<<endl;
    cout<<"Branch of the faculty is : "<<fbranch<<endl;
}
int main()
{
    info i;
    i.data("Anil", 12, "CM");
    i.data("A.A.Uike", 201, 50000, "CSE");
    return 0;
}
