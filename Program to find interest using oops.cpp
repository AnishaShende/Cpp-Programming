#include <iostream>
using namespace std;

class interest{
    float p, n, r, res;
    public:
       float getdata(float, float, float);
};
float interest::getdata(float p, float n, float r = 6.5){
    res = p + (p*n*r/100);
    return res;
}
int main()
{
    interest i;
    cout<<"Total interest is : "<<i.getdata(10000, 10)<<endl;
    cout<<"Total interest using custom rate of interest is : "<<i.getdata(10000, 10, 7.5)<<endl;
    return 0;
}
