#include<iostream>
using namespace std;
void revstr(string s)
{
    int start_index=0;
    int last_index=19;
    
    while(start_index<last_index)
    {
        char c=s[start_index];
        s[start_index]=s[last_index];
        s[last_index]=c;

        start_index++;
        last_index--;
    }
        cout<<s;

}
int main()
{
    string s="hello this is a test";
    cout<<s;
    cout<<"\n";
    revstr(s);

    return 0;

}