#include <iostream>

using namespace std;

int volume(int, int);
long volume(long);
double volume(double, int, int);
int main()
{
    cout<<"Volume of cylinder is : "<<volume(10, 20)<<endl;
    cout<<"Volume of rectangle is : "<<volume(10, 20, 30)<<endl;
    cout<<"Volume of cube is : "<<volume(10)<<endl;
    return 0;
}
int volume(int r, int b){
    return 3.14*r*r*b;
}
double volume(double a, int b, int c){
    return a*b*c;
}
long volume(long a){
    return a*a*a;
}
