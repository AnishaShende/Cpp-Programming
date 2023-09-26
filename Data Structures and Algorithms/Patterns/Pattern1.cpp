#include <iostream>
using namespace std;

    void Pattern1(int num){
        // * * * *
        // * * * *
        // * * * *
        // * * * * 
        for(int i = 0; i < num; i ++){
            for (int j = 0; j < num; j++)
            {
                cout<<"* ";
            }
            cout<<endl;
        }
    }

    int main(){
        int num;
        cout << "Enter a number : ";
        cin >> num;
        Pattern1(num);
        return 0;
    }
