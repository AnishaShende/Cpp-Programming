#include<iostream>
#include<fstream>
using namespace std;
int main()
{
ifstream fin("A.txt", ios::in);
char str[30];
while(fin)
    {
fin.getline(str,30);
cout<<str<<endl;
    }
fin.close();
}
