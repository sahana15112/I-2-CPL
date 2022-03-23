#include<stdio.h>
int main()
{
int a,b,c,root1,root2;
a=10;
b=20;
c=30;
printf("Find roots for quadratic equation,10x*x+20*b+30");
root1=-b+sqrt(b*b-4*a*c)/2*a;
root2=-b-sqrt(b*b-4*a*c)/2*a;
printf("the root1 is %d",root1);
Printf("the root2 is %d",root2);
return 0;
}
