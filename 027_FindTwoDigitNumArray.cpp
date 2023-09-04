#include<iostream>
using namespace std;
void twodigit(int a[])
{
    int i;
    for(i=0;i<8;i++)
    {
        if(a[i]>9 && a[i]<100)

        cout<<"the two digit number is"<<" "<<a[i];
        cout<<"\n";
    }
}
int main()
{
    int a[8]={2,4,5,19,39,23,6};
    twodigit(a);
    return 0;
}