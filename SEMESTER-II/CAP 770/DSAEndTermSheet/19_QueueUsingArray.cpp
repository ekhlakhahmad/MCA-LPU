#include<iostream>
using namespace std;

#define CAPACITY 5

int queue[CAPACITY];
int rear = -1;
int front = -1;


void enqueue(int data){
    if(rear==CAPACITY-1)
        cout << "Queue is full" << endl;
    else if(rear==-1 && front==-1){
        rear = front = 0;
        queue[rear] = data;
    }else{
        rear++;
        queue[rear] = data;
    }
}

void dequeue(){
    if(front==-1 && rear==-1)
        cout << "Queue is empty" << endl;
    else if(rear==front){
        cout << queue[front] << " is deleted" << endl;
    }else{
         cout << queue[front] << " is deleted" << endl;
         front++;
    }
}


void printQueue(){
    if(front==-1 && rear==-1)
      cout << "Queue is empty" << endl;
    else{
      for (int i = front; i <= rear;i++)
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