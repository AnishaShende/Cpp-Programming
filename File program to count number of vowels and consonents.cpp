#include <iostream>
#include <fstream>
using namespace std;

int main(){
    
    ofstream out;
    out.open("G.txt", ios::out);
    out<<"kim taeyoung jeon junkook park jimin jung hoseok";
    out.close();
    ifstream in;
    in.open("G.txt", ios::in);
    char str;
    int v = 0, c = 0;
    while(in){
        in.get(str);
        if (str == 'a' || str == 'e' || str == 'i' || str == 'o' || str == 'u')
        {
            v++;
        }
        else{
            c++;
        }
    }
    cout<<"Total Number of vowels are "<<v<<endl;
    cout<<"Total Number of consonents are "<<c<<endl;
    in.close();
    return 0;

}
