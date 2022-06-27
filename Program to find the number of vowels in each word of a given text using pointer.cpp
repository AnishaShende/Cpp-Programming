// Program to find the number of vowels in each word of a given text using pointer

#include <iostream>
using namespace std;

int main(){
    char str[] = "object oriented programming ";
    char *ptr;
    ptr = str;
    int n = 3;
    int count[n];
    int c = 0;
    int i;
    i = 0;
    do
    {
        if(*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u'){
                c++;
                cout<<c<<" ";
        }
        else if (*ptr == ' ')
        {
            count[i] = c;
            i++;
            c = 0;
        }
            ptr++;
    } while ((*ptr) != '\0');
    
    cout<<"Number of vowels in each words are respectively :"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<count[i]<<endl;
    }
}
