#include<iostream>
using namespace std;
int main()
{
    int n;
    int sum=1;
    cout<<"enter a number";
    cin>>n;

    for(int i=n;i>=1;i--)
    {
        sum=sum*i;
    }
    cout<<sum<<" is factirial of "<<n;

    return 0;
}
