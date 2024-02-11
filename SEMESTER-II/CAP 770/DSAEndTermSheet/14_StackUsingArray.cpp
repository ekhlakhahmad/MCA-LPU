#include<iostream>
using namespace std;

#define CAPACITY 5

int stack[CAPACITY];
int top = -1;

void push(int data){
    if(top==CAPACITY-1){
        cout << "Stack is full" << endl;
    }else{
        top++;
        stack[top] = data;
        cout << data << " is pushed" << endl;
    }
}

void pop(){
    if(top==-1){
        cout << "Stack is empty" << endl;
    }else{
        cout << stack[top] << " is deleted" << endl;
        stack[top--];
    }
}

void peek(){
    if(top==-1){
        cout << "Stack is empty" << endl;
    }else{
        cout << "Peek element is " << stack[top] << endl;
    }
}

void printStack(){
    if(top==-1){
        cout << "Stack is empty" << endl;
    }else{
        for (int i = 0; i <= top;i++){
            cout << stack[i] << " ";
        }
    }
    cout << endl;
}


int main(){

    push(10);
    push(20);
    push(30);
    printStack();
    pop();
    printStack();
    peek();

    return 0;
}