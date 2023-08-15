#include<iostream>
using namespace std;
int main()
{
    int n,count=0;

    cout<<"enter a number";
    cin>>n;

    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            count++;
            cout<<n<<" is not prime number";
            break;
        }
    }
    if(count==0)
    cout<<n<<" it is prime number";

} 
