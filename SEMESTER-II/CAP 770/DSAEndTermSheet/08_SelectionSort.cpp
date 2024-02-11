#include<iostream>
using namespace std;

void selectionSort(int arr[],int size){

    int i, j, minIndex;
    for (int i = 0; i < size - 1;i++){
        minIndex = i;
        for (int j = i + 1; j < size;j++){
            if(arr[j]<arr[minIndex])
                minIndex = j;
        }
        if(minIndex!=i){
        int temp;
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
        }

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

    selectionSort(arr, size);

    for (int i = 0; i < size;i++){
     cout << arr[i] << endl;
    }

return 0;
}