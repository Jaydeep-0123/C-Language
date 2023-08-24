#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;

    cout<<"enter first a number";
    cin>>a;
    cout<<"enter second a number ";
    cin>>b;

    int swap=a;
         a=b;
         b=swap;

      cout<<"\nthe first swaaping value is"<<" "<<a;
      cout<<"\nthe second swaaping value is"<<" "<<b;

      return 0;   
}