#include<stdio.h>
int main()
{float a,b,d;
int c;
printf("enter the first number in decimal :");
scanf("%f",&a);
printf("enter the second number in decimal :");
scanf("%f",&b);
d=a*b;
c=d;
printf("the product of%f and %f in decimal is %f ",a,b,d);
printf("the product of%f and %f in integer  is %d ",a,b,c);
return 0;
}
