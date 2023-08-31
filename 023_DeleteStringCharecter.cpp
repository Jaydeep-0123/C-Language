#include<iostream>
using namespace std;
void deletestring(string s,char ch)
{
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==ch)

        for(int j=i;j<s.length();j++)
        {
            s[j]=s[j+1];
        }
    }
    cout<<s;
}
int main()
{
    string s = "kuldeep";
    char ch;
    cout<<s;
    cout<<"\n";
    cout<<"enter the cherecter";
    cin>>ch;
    deletestring(s,ch);

    return 0;
}
