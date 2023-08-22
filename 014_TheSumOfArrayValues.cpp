#include<iostream>
using namespace std;
int main()
{
  int a[5]={10,20,30,40,50};
  int sum=0;

 for(int i=0;i<5;i++)
 {
    cout<<"the array value are"<<a[i];
    cout<<"\n";
 }
  for(int i=0;i<5;i++)
  {
     sum=sum+a[i];
  }
     cout<<"the sum of array element"<<sum;
  
return 0;
}


 
