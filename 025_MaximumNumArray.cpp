#include<iostream>
using namespace std;
void maxvalue(int a[])
{
    int max=-1;
    for(int i=0;i<10;i++)
    {
        if(max<a[i])
         max=a[i];
    }
    cout<<"the maximum number is"<<" "<<max;
}
int main()
{
    int a[10]={2,4,6,8,10,12,5,7,20,40};

    maxvalue(a);

    return 0;
}