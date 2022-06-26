#include <iostream>
#include <fstream>
using namespace std;

int main(){

    string str;
    ifstream in("Sample2.txt");
    getline(in, str);
    cout<<str<<endl;
    getline(in, str);
    cout<<str<<endl;
    in.close();
    return 0;
    
}