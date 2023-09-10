#include<iostream>
using namespace std;
int main()
{
	int a[10];
	 
	 for(int i=0;i<10;i++)
	 {
		 cout<<"the"<<" "<<i<<" "<<"position array element is = ";
		 cin>>a[i];
	 }
   
      cout<<"\n";
     for(int i=0;i<10;i++)
	 {
       if(a[i]>9 && a[i]<100)   
       cout<<"the two digit find is"<<" "<<i<<" "<<"position"<<"\n";
	 }
return 0;
}	 