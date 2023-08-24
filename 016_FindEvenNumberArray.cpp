#include<iostream>
using namespace std;
int main()
{
     int arr[10]={2,3,4,5,6,7,8,10,13,15};

     for(int i=0;i<10;i++)
     {
        if(arr[i]%2==0)
        cout<<arr[i]<<" ";
     }
     return 0;
}