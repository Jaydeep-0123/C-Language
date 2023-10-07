#include<stdio.h>

int max_of_four(int a,int b,int c,int d)
{
    if(a>b && a>c && a>d)
    return a;
    else if(b>a && b>c && b>d)
    return b;
    else if(c>a && c>b && c>d)
    return c;
    else {
    return d;
    }
}
int main()
{
    int a,b,c,d;
    
    scanf("%d\n",&a);
    scanf("%d\n",&b);
    scanf("%d\n",&c);
    scanf("%d\n",&d);
    
   int ans = max_of_four(a,b,c,d);
   printf("%d",ans);
}
