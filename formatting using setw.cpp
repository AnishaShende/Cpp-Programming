#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    int n, item[10], cost[10], ttlval[10], finalTtl = 0;
    string name[10];
    cout<<"Manish Super Market\n";
    cout<<"\nEnter the number of items : ";
    cin>>n;
    for(int i = 0; i < n; i ++){
        cout<<"Enter name of items "<<i+1<<": ";
        cin>>name[i];
        cout<<"Enter quantity of items : ";
        cin>>item[i];
        cout<<"Enter cost of items : ";
        cin>>cost[i];
        ttlval[i] = item[i]*cost[i];
        finalTtl += ttlval[i];
    }
    cout<<setw(7)
        <<"Name"
        <<setw(11)
        <<"ITEMS"
        <<setw(16)
        <<"COST"
        <<setw(21)
        <<"TOTAL VALUE"
        <<endl;
    for(int i = 0; i < n; i ++){
    cout<<setw(6)
        <<name[i]
        <<right
        <<setw(11)
        <<item[i]
        <<right
        <<setw(16)
        <<cost[i]
        <<right
        <<setw(21)
        <<ttlval[i]
        <<endl;
    }
    cout<<setw(41)
        <<"Final Total"
        <<setw(13)
        <<finalTtl;
    return 0;
}
