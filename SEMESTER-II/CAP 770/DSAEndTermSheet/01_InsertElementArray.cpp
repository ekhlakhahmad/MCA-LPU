#include<iostream>
using namespace std;

void insertAnElement(int arr[],int size,int data,int index){

  int i;

  for(i=size-2;i>=index;i--){
    arr[i+1]=arr[i];
  }

  arr[index]=data;

}
                    
int main(){

    int size;
    cout<<"Enter size of array :"<<endl;
    cin>>size;

    int arr[size];
    cout<<"Enter array elements :"<<endl;
    for(int i=0;i<size-1;i++){
     cin>>arr[i];
    }

    int data;
    cout<<"Enter element to insert :"<<endl;
    cin>>data;

    int index;
    cout<<"Enter index to insert :"<<endl;
    cin>>index;

    insertAnElement(arr,size,data,index);

    cout<<"Printing array elements :"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
  
return 0;
}