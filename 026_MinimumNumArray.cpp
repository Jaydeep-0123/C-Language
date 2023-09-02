#include<iostream>
using namespace std;
void minimumarray(int a[])
{
    int mini=a[0];
    for(int i=0;i<8;i++)
    {
        if(mini>a[i])
        mini=a[i];
    }
    cout<<"the minimum number is"<<" "<<mini;
}
int main()
{
    int a[8]={30,40,50,60,70,23,46,33};

    minimumarray(a);

    return 0;

}