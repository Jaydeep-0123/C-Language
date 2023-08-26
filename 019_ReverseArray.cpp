#include<iostream>
using namespace std;
int main()
{
    int a[10]={10,20,30,40,50,60,70,80,90,100};
    int first=0;
    int last=9;

    while(first<last)
    {
        int c=a[last];
           a[last]=a[first];
           a[first]=c;
           first++;
           last--;

    }

    for(int i=0;i<10;i++)
    {
        cout<<" "<<a[i];
    }
    return 0;
}