#include <iostream>

using namespace std;

class Energycalc{
    int comp;
    int fan;
    int tblight;
    int time;
    int res;
    public:
        void getvalues();
        void calculation();
};
void Energycalc :: getvalues(){
    cout<<"Enter energy consume by computer in a hour : ";
    cin>>comp;
    cout<<"Enter energy consume by fan in a hour : ";
    cin>>fan;
    cout<<"Enter energy consume by tubelight in a hour : ";
    cin>>tblight;
    cout<<"Enter time in hours : ";
    cin>>time;
}
void Energycalc :: calculation(){
    res = (comp*time)+(fan*time)+(tblight*time);
    cout<<"Total energy comsumed is : "<<res<<endl;
}

int main()
{
    Energycalc ec;
    ec.getvalues();
    ec.calculation();
    return 0;
}
