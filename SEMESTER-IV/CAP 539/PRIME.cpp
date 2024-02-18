#include<iostream>
using namespace std;
int main()
{
   int n[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
   n[0]=0;
   for(int i=1;i<sizeof(n)/sizeof(n[0]);i++)
   {
    int temp=n[i]*n[i];
    if(temp<=20)
    {
        for(int j=i+1;j<sizeof(n)/sizeof(n[0]);j++)
        {
            if(n[j]%n[i]==0)
                n[j]=0;
        }
    }
   }
   for(int i=0;i<sizeof(n)/sizeof(n[0]);i++)
   {
    if(n[i]!=0)
    {
        cout<<n[i]<<endl;
    }
   }
    return 0;
}