#include<stdio.h>
int main()
{
    int a=10;
    int *p1=&a;
    int **p2=&p1;
    int ***p3=&p2;

    printf("\nThe address of a = %u",&a);
    printf("\nThe address of p1 = %u",p1);
    printf("\nThe address of p1 = %u",&p1);
    printf("\nThe address of p2 = %u",p2);
    printf("\nThe address of p2 = %u",&p2);
    printf("\nThe address of p3 = %u",p3);
    printf("\nThe address of p3 = %u",&p3);

    printf("\n");

    printf("\n The value of a = %d",a);
    printf("\n The value of p1 = %d",*p1);
    printf("\n The value of p2 = %d",**p2);
    printf("\n The value of p3= %d",***p3);
    

    return 0;
}