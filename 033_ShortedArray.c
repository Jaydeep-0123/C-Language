#include<stdio.h>
 int maximumValue(int a[],int size)
{    
     int max=a[0];
    for(int i=0;i<size;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
   return max+1;

}
void shortedArray(int a[],int size)
{    
    int n=0;
    while(n!=maximumValue(a,size))
    {
      for(int i=size-1;i>=0;i--)
      {
         if(a[i]==n)
          printf("%d ",a[i]);
      }
      n++;
    }  
}
void show(int a[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
int main()
{
    int a[]={2,1,2,0,9,0,3,2,4,5,6,3,2,3,6};
    int size=sizeof(a)/sizeof(int);
    
    show(a,size);
   maximumValue(a,size);
   shortedArray(a,size);


    return 0;
}