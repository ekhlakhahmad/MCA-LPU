#include<iostream>
using namespace std;
#define SIZE 5

int rear = -1;
int front = -1;
int queue[SIZE];

void enqueue(int data){
    if(front==-1 && rear==-1){
        front = rear = 0;
        queue[rear] = data;
    }else if((rear+1)%SIZE==front){
        cout << "Queue is full" << endl;
    }else{
        rear = (rear + 1) % SIZE;
        queue[rear] = data;
    }
}

void dequeue(){
    if(front==-1 && rear==-1)
        cout << "Queue is empty" << endl;
    else if(front==rear){
        cout << queue[front] << " is deleted" << endl;
        front = rear = -1;
    }else{
        cout << queue[front] << " is deleted" << endl;
        front = (front = 1) % SIZE;
    }
}

void printQueue(){
   if(front==-1 && rear==-1)
        cout << "Queue is empty" << endl;
   else{
        int i = front;
        while (i != rear){
            cout << queue[i] << " ";
            i = (i + 1) % SIZE;
        }
        cout << queue[i] << endl;
   }
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