#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

Node *top = NULL;

void push(int data){
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;

    newNode->next = top;
    top = newNode;
}

void pop(){
    Node *temp;
    if(top==NULL){
        cout << "Stack is empty" << endl;
    }else{
        temp = top;
        cout << temp->data << " is deleted" << endl;
        top = top->next;
        temp->next = NULL;
        delete temp;
    }
}

void peek(){
    if(top==NULL)
        cout << "Stack is empty" << endl;
    else
        cout << "Peek element is " << top->data << endl;
}

void printStack(){
    Node *temp = top;
    if(top==NULL)
        cout << "Stack is empty" << endl;
    else{
        while(temp!=NULL){
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
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