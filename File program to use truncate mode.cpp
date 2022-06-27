#include <iostream>
#include <fstream>
using namespace std;

int main(){

    //out, in, append, ate, binary

    string str;
    ofstream out;
    ifstream in;
    out.open("D.txt", ios::trunc); // out
    
    out<<"hi high hey\n";
    out<<"word for word\n";
    out<<"go to friend"; // clear previous data present in file and add current data
    out.close();
   return 0;
}
