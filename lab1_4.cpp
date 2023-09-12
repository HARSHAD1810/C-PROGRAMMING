#include<stdio.h>
int main()
{
char a[20];
int b,c,d,e,f;
float g;
printf("enter the name of the student :\n ");
scanf("%s",&a);
printf("enter the marks scored in maths : \n");
scanf("%d",&b);
printf("enter the marks scored in physics : \n");
scanf("%d",&c);
printf("enter the marks scored in chemistry : \n");
scanf("%d",&d);
printf("enter the marks scored in computer science : \n");
scanf("%d",&e);
printf("enter the marks scored in english : \n");
scanf("%d",&f);
g=((b+c+d+e+f)/5);
printf("u have scored %f in ur exams",g);
return 0;

}
