#include <iostream>
#include<fstream>
using namespace std;
int main()
{
ofstream fout("C.txt");
ifstream fin("C.txt");
char name[10];
float cost;
cout<<"Enter item name"<<endl;
cin>>name;
cout<<"Enter item cost"<<endl;
cin>>cost;
cout<<"Lets write the data to file\n";
fout<<name<<endl;
fout<<cost<<endl;
cout<<"Lets read the data from file\n";
fin>>name;
cout<<"Name of item is - "<<name<<endl;
fin>>cost;
cout<<"Name of cost is - "<<cost<<endl;
fout.close();
fin.close();
return 0;
}
