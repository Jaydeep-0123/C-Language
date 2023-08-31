#include<iostream>
using namespace std;
void charecterfind(string s,char ch)
{
    int count=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==ch)
        count++;
    }
    if(count==0)
    cout<<ch<<" "<<"is not found";
    else
    cout<<ch<<" "<<"is found";
}
int main()
{
    string s = "jaydeep";
    char ch;
    cout<<"enter a cherecter";
    cin>>ch;
    cout<<s;
    cout<<"\n";
    charecterfind(s,ch);

    return 0;
}