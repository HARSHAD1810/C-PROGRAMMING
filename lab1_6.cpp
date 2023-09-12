#include<stdio.h>
int main ()
{ int a,b,c;
  printf("enter the first number to be swapped");
  printf ("1st number \n 2nd number\n ");
  
  scanf("%d%d",&a,&b);
  a=a+b;
  b=a-b  ;
  a=a-b;
  printf("the value of a is %d \n",a);
  printf("the value of b is %d",b);
  return 0;
  
}
