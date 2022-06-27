#include <iostream>
using namespace std;

int main(){

    char str[30];
    char *ptr;
    ptr = &str[0];
    int count = 0;
    cout<<"Enter the string : ";
    cin>>str;
    while (*ptr != '\0')
    {
        count++;
        ptr++;
    }
    while (count > 0)
    {
        ptr--;
        cout<<*ptr;
        count--;
    }
    cout<<endl;
    return 0;
}