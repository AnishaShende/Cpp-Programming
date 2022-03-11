#include <iostream>

using namespace std;

int triangle(int, int);
double triangle(double, int, int);
long triangle(long);
int main()
{
    cout<<"Area of right angle triangle is : "<<triangle(10, 20)<<endl;
    cout<<"Area of isoceles triangle is : "<<triangle(10, 20, 30)<<endl;
    cout<<"Area of equilateral triangle is : "<<triangle(10)<<endl;
    return 0;
}
int triangle(int a, int b){
    return 0.5*a*b;
}
double triangle(double a, int b, int c){
    return 0.43*(a+b+c);
}
long triangle(long a){
    return 0.86*a*a;
}
