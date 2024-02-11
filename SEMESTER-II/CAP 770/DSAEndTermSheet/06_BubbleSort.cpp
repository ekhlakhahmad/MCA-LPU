#include<iostream>
using namespace std;

void bubbleSort(int arr[],int size){

    for (int i = 0; i < size-1;i++){
        bool flag = false;
        for (int j = 0; j < size - i - 1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = true;
            }
        }
        if(flag==false)
        break;
    }
}
                    
int main(){

    int size;
    cout << "Enter size of array :" << endl;
    cin >> size;

    int arr[size];
    cout << "Enter array elements :" << endl;
    for (int i = 0; i < size; i++)
    {
     cin >> arr[i];
    }

    bubbleSort(arr, size);

    for (int i = 0; i < size;i++){
     cout << arr[i] << endl;
    }

     return 0;
}