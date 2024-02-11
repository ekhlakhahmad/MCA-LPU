#include<iostream>
using namespace std;

int linearSearch(int arr[],int size,int key){

    for (int i = 0; i < size;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
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

    int key;
    cout << "enter key value :" << endl;
    cin >> key;

    int index = linearSearch(arr, size, key);

    if(index<0)
     cout << key << " is not present" << endl;
     else
     cout << key << " is present at " << index << " location";

    return 0;
}