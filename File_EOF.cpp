#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){

    string str;
    ifstream in("Sample3.txt");
    while(in.eof() == 0){
        getline(in, str);
        cout<<str<<endl;
    }
    in.close();
    return 0;

}