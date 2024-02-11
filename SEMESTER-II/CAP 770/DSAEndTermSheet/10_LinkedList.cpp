#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

Node *head = NULL;


void insertAtFirst(int data){
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;

    if(head==NULL)
        head = newNode;
    else{
        newNode->next = head;
        head = newNode;
    }
}

void insertAtLast(int data){
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;

     if(head==NULL)
     head = newNode;
     else{
     Node *temp = head;
     while(temp->next!=NULL){
         temp = temp->next;
     }
     temp->next = newNode;
     }
}

void insertAtSpecifiedPosition(int data,int pos){
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;

    Node *temp = head;
    int i = 1;
    while(i<pos-1){
     temp = temp->next;
     i++;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteFirstNode(){
    Node *temp = head;
    if(head==NULL)
     cout << "List is empty" << endl;
    else{
     head = temp->next;
     temp->next = NULL;
     delete temp;
    }
}

void deleteLastNode(){
    Node *temp = head;
    Node *prevNode = temp;

    while(temp->next!=NULL){
     prevNode = temp;
     temp = temp->next;
    }

    if(temp==head){
     head = NULL;
    }else{
     prevNode->next = NULL;
    }
    delete (temp);
}


void searchNode(int data){
    Node *temp = head;
    while(temp!=NULL){
        if(temp->data==data){
        cout << "Element is present" << endl;
        return;
        }
        temp = temp->next;
    }
    cout << "Element is not present" << endl;
}


void printList(){
    if(head==NULL){
     cout << "List is empty" << endl;
    }else{
    Node *temp = head;
    while(temp!=NULL){
    cout << temp->data << " ";
    temp = temp->next;
    }
    cout << endl;
}
}


int main(){

insertAtFirst(10);
insertAtFirst(5);
insertAtLast(20);
insertAtSpecifiedPosition(50, 2);
printList();
searchNode(20);
searchNode(70);
deleteFirstNode();
deleteLastNode();
printList();

return 0;
}