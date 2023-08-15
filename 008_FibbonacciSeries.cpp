#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number";
    cin>>n;
    int first=0;
    int second=1;
    int sum=0;
    cout<<first<<" "<<second ; 

    for(int i=1;i<=n;i++)
    {
        sum=first+second;
        first=second;
        second=sum;
        cout<<" "<<sum;
    }
    return 0;
}