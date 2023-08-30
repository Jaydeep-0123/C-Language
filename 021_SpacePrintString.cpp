#include<iostream>
using namespace std;
int countspace(string s)
{
    int count=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==' ')
        count++;
    }
    //cout<<"the space is in the string"<<" "<<count;
    return count;
}

int main()
{
    string s ="hello this is a test";
    cout<<s;
    cout<<"\n";
    int space=countspace(s);
    cout<<"the space is in the string"<<" "<<space;

    return 0;
}