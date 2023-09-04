#include<iostream>
using namespace std;
void secondmax(int a[])
{
    int max=a[0];
    int smax=a[0];

    for(int i=0;i<5;i++)
    {
          if(a[i]>max)
          {
           smax=max;
           max=a[i];
          }
        else  if(a[i]>smax && a[i]!=max)
        {
         smax=a[i];
        }
    }    
    cout<<"the maximum number is"<<" "<<max;
    cout<<"\n";
    cout<<"the secmax number is"<<" "<<smax;
}
int main()
{
    int a[5]={10,30,20,40,50};

    secondmax(a);

    return 0;
}