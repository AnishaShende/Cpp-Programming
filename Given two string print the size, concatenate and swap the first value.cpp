#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    string a, b, c;
    char temp;
    cin>>a>>b;
    c = a + b;
    cout<<a.size()<<" "<<b.size()<<endl;
    cout<<c<<endl;
    temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    cout<<a<<" "<<b;
    return 0;
}
