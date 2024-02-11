#include<iostream>
using namespace std;

void deleteAnElement(int arr[],int size,int index){

  for(int i=index;i<size-1;i++){
    arr[i]=arr[i+1];
  }

}
                    
int main(){

    int size;
    cout<<"Enter size of array :"<<endl;
    cin>>size;

    int arr[size];
    cout<<"Enter array elements :"<<endl;
    for(int i=0;i<size;i++){
     cin>>arr[i];
    }

    int index;
    cout<<"Enter index number to delete :"<<endl;
    cin>>index;

    deleteAnElement(arr,size,index);

    cout<<"Printing index number to delete :"<<endl;
    for(int i=0;i<size-1;i++){
        cout<<arr[i]<<" ";
    }
  
return 0;
}