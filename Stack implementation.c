#include <iostream>
using namespace std;

int x, top, stack[10], i, n;
void push();
void pop();
void display();

int main()
{
    int top = -1, choice;
    printf("Enter the size of stack : ");
    scanf("%d", &n);
    do{
        printf("Enter your choice : \n");
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1: {
                push();
                break;
            }
            case 2: {
                pop();
                break;
            }
            case 3: {
                display();
                break;
            }
            case 4: {
                break;
            }
            default : {
                printf("Invalid !");
            }
        }
    }
    while(choice != 4);
    return 0;
}
void push(){
    if(top >= n-1){
        printf("Overflow : stack is full\n");
    }
    else {
        printf("Enter a value to push : ");
        scanf("%d", &x);
        top++;
        stack[top] = x;
    }
}
void pop(){
    if(top <= -1){
        printf("Underflow : stack is empty");
    }
    else{
        printf("Poped element is %d", stack[top]);
         //x = stack[top];
        top--;
    }
}
void display(){
    if(top >= 0){
        printf("These are the elements present in stack : \n");
        for(i = top; i >= 0; i--){
        printf("%d ", stack[i]);
    }
    }
    else {
        printf("Empty stack");
    }
}
