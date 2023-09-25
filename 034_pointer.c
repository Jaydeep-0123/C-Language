#include<stdio.h>
int main()
{
    int a=10;
    int *ptr;
    ptr=&a;

    int b=10;
    int *ptr1;
    ptr1=&b;

    printf("\nThe address of a : %u ",&a);
    printf("\nThe address of ptr : %u ",ptr);
    printf("\nThe address of ptr : %u ",&ptr);
    printf("\nThe value of a = %d",a);
    printf("\nThe value of ptr = %u",*ptr);
    
    printf("\n");
    printf("\nThe address of b : %u ",&b);
    printf("\nThe address of ptr1 : %u ",ptr1);
    printf("\nThe address of ptr1 : %u ",&ptr1);
    printf("\nThe value of a = %d",a);
    printf("\nThe value of ptr = %u",*ptr1);


    return 0;
}   