#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

Node *front = NULL;
Node *rear = NULL;

 
 void enqueue(int data){
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;

    if(front==NULL && rear==NULL){
        front = rear = newNode;
    }else{
        rear->next = newNode;
        rear = newNode;
    }
 }

 void dequeue(){
    Node *temp = front;
    if(front==NULL && rear==NULL)
        cout << "Queue is empty" << endl;
    else{
        cout << front->data << " is deleted" << endl;
        front = front->next;
        delete temp;
    }
 }

 void printQueue(){
    Node *temp = front;
    if(front==NULL && rear==NULL)
        cout << "Queue is empty" << endl;
    else{
        while(temp!=NULL){
            cout << temp->data<<" ";
            temp = temp->next;
        }
    }
    cout << endl;
 }

int main(){

    enqueue(10);
    enqueue(20);
    enqueue(30);
    printQueue();
    dequeue();
    printQueue();

    return 0;
}