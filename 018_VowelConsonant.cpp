#include<iostream>
using namespace std;
int main()
{
    char ch;

    cout<<"enter the cherecter";
    cin>>ch;

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
       ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
     {
        cout<<ch<<" "<<"is vowel";
     }  
     else
     {
        cout<<ch<<" "<<"is consonant";
     }
     return 0;
}