#include <iostream>
#include <fstream>
using namespace std;

int main(){

    string str;
    ofstream out("Sample.txt");
    cout<<"Enter name : ";
    getline(cin, str);
    cout<<str<<endl;
    out<<str;
    out.close();
    return 0;
    
}