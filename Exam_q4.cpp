#include <iostream>
using namespace std;

int num;
int main(){
    int num;
    num = 10;
    ::num = 20;
    cout<<num<<endl;
    cout<<::num<<endl;
    return 0;
}