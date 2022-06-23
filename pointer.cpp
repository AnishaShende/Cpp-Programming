#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void update(int *a,int *b) {
    // Complete this function
    int num;
    int tempa = (*a);
    int tempb = (*b);
    (*a) = (*a)+(*b);
    num = tempa-tempb; 
    (*b) = abs(num);
}
int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    cin>>a>>b;
    update(pa, pb);
    cout<<a<<endl<<b;
    return 0;
}
