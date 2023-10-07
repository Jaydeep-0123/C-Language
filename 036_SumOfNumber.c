#include<stdio.h>
int main()
{
    int a,b;
    float n,m;
    
    scanf("%d %d",&a,&b);
    
    scanf("%f %f",&n,&m);
    int c=a+b;
    int d=a-b;
    printf("%d %d\n",c,d);
    
    float e=n+m;
    float f=n-m;
    printf("%.1f %.1f\n",e,f);
    
    return 0;
}
