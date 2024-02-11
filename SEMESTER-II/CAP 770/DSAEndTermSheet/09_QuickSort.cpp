#include<iostream>
using namespace std;

int partition(int arr[], int low, int high)
{

int pivot=arr[low];
int i=low;
int j=high;

while(i<j)
{
    while(arr[i]<=pivot)
    i++;

    while(arr[j]>pivot)
    j--;

    if(i<j)
    swap(arr[i],arr[j]);

}

swap(arr[low], arr[j]);

return j;
 
}

void Quick_sort(int arr[], int low, int high )
{
  int p;
  if(low<high)
  {
      p=partition(arr, low, high);
      Quick_sort(arr, low, p-1);
      Quick_sort(arr,p+1, high);
  }

}

int main()
{
   int size;
   cout<<"enter size of array :";
   cin>>size;

    int arr[size];
    cout<<"enter elements of array\n";
    for(int i=0;i<size;i++)
    cin>>arr[i];

    int low=0;
    int high=size-1;
    
    Quick_sort(arr, low, high);

    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";

return 0;
}