#include <iostream>
using namespace std;
int count = 0;

class Cons{
    public:
        //Cons(){}
        Cons(){
            cout<<"Constructor called "<<count<<endl;
            count ++;
        }
        ~Cons(){
            cout<<"Destructor called "<<count<<endl;
            count--;
        }
};

int main(){
    Cons c1;
    Cons c2;
    Cons c3;
    return 0;
}
