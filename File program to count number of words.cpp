#include <iostream>
#include <fstream>
using namespace std;

int main(){
    
    ofstream out;
    out.open("F.txt", ios::out);
    out<<"Kim Taeyoung Jeon Junkook Park Jimin Jung Hoseak Min Yoongi";
    out.close();
    ifstream in;
    in.open("F.txt", ios::in);
    int count = 0;
    char str;
    while(in){
        in.get(str); //in>>str; /// Remember to use get function here ///
        if (str==' ')
        {
            count++;
        }
    }
    cout<<"Total Number of words are "<<count+1<<endl;
    in.close();
    return 0;

}

// #include<iostream>
// #include<fstream>
// using namespace std;
// int main()
// {
//     ifstream fin("F.txt");
//     int count=0;
//     char ch;
//     while(fin)
//     {
//         fin.get(ch);  // ch=fin.get()
//         if(ch==' ')
//         {
//             count++;
//         }
//     }
//     cout<<"The total words are  " <<count+1;
// }
