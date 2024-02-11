#include<iostream>
using namespace std;

 int binarySearch(int arr[],int low,int high,int key){

    if(low<=high){
        int mid = (low + high) / 2;

        if(arr[mid]==key)
            return mid;
        else if(key<arr[mid])
            binarySearch(arr, mid + 1, high, key);
        else
            binarySearch(arr, low, mid - 1, key);
    }
    return -1;
 }
                    
int main(){
  
  int size;
  cout<<"Enter size of array :"<<endl;
  cin>>size;

   int arr[size];
   cout<<"Enter array elements in sorted order :"<<endl;
   for(int i=0;i<size;i++){
     cin>>arr[i];
    }

    int low = 0;
    int high = size - 1;
    int key;
    cout << "enter key value :" << endl;
    cin >> key;

    int index = binarySearch(arr, low, high,key);

    if(index<0)
     cout << key << " is not present" << endl;
     else
     cout << key << " is present at " << index << " location";

  
return 0;
}