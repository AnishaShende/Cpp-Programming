#include <iostream>
using namespace std;

class gst{
    int wheat;
    int oil;
    float total;
    float res;
    public:
       float showdata(int, int);
};
float gst::showdata(int wheat, int oil){
    
    total = wheat + oil;
    if(total > 2500){
        res = total + (total*0.20);
    }
    else if(total < 2500){
        res = total + (total*0.18);
    }
    return res;
}

int main()
{
    gst g;
    int wheat, oil;
    cout<<"Enter kgs of wheat : ";
    cin>>wheat;
    cout<<"Enter kgs of oil : ";
    cin>>oil;
    cout<<"Your total bill is of rupees "<<g.showdata(wheat, oil)<<" including gst."<<endl;
    return 0;
}
