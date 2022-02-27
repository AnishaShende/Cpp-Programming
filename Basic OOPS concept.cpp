#include <iostream>

using namespace std;

class person{
    char name[20];
    int age;
    public:
        void getdata();
        void showdata();
};
void person :: getdata(){
    cout<<"Enter name : ";
    cin>>name;
    cout<<"Enter age : ";
    cin>>age;
}
void person :: showdata(){
    cout<<"Name is : "<<name<<endl;
    cout<<"Age is : "<<age<<endl;
}

int main()
{
    person p;
    p.getdata();
    p.showdata();
    return 0;
}
