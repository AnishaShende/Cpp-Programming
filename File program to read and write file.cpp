#include <iostream>
#include <fstream>
using namespace std;

int main(){
    
    ofstream out;
    out.open("B.txt", ios::out);
    out<<"Hey, Todays wheather is great.\n";
    out<<"But I've to study now :(\n";
    out<<"My Final term-end exams are going ...";
    out.close();

    ifstream in;
    in.open("B.txt", ios::in);
    char str[50];
    while (in)
    {
        in.getline(str, 50);
        cout<<str<<endl;
    }
    in.close();
    return 0;

}
