#include<iostream>
using namespace std;

void insertionSort(int arr[],int size){
    int i, key, j;
    for (i = 1; i < size; i++)
    {
        key = arr[i];
        j = i - 1;
    
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
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

    insertionSort(arr, size);

    for (int i = 0; i < size;i++){
     cout << arr[i] << endl;
    }

return 0;
}