// Program to display birthday using pointer to array of objects

#include <iostream>
using namespace std;

class Birthday{
    int day;
    int month;
    int year;
    public:
        void getdata(){
            cout<<"Enter day : ";
            cin>>day;
            cout<<"Enter month : ";
            cin>>month;
            cout<<"Enter year : ";
            cin>>year;
        }
        void putdata(){
            cout<<"Date is : "<<day<<"/"<<month<<"/"<<year<<endl;
        }
};
int main(){
    Birthday obj[3];
    Birthday *ptr[3];
    *ptr = &obj[0];
    for (int i = 0; i < 3; i++)
    {
        ptr[i] = new Birthday;
        ptr[i]->getdata();
    }
    for (int i = 0; i < 3; i++)
    {
        ptr[i]->putdata();
    }
    return 0; 
}
