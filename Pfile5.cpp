#include <iostream>
#include <fstream>
using namespace std;

int main(){
    
    ofstream out;
    out.open("E.txt", ios::out);
    out<<"Kim Taeyoung Jeon Junkook Park Jimin Jung Hoseak";
    out.close();
    ifstream in;
    char ch, str;
    int count;
    in.open("E.txt", ios::in);
    cout<<"Enter the character you want to count number of occurances of : ";
    cin>>ch;
    count = 0;
    while(in){
        in>>str;
        if(str == ch){
            count++;
        }
    }
    cout<<ch<<" character occures "<<count<<" times"<<endl;
    in.close();
    return 0;

}