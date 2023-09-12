#include<stdio.h>
int main()

{
    int a,b,c,d,e,f;
printf("ENTER TWO INTEGERS:");
scanf("%d %d",&a,&b);
c=a+b;
d=a-b;
e=a*b;
f=a/b;
printf("the addition of %d and %d is %d \n",a,b,c);
printf("the subtraction of %d and %d is %d \n",a,b,d);
printf("the multiplication of %d and %d is %d\n",a,b,e);
printf("the division of %d and %d is %d",a,b,f);
return 0;
}
