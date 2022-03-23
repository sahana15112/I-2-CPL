#include<stdio.h>
#include<math.h>
void main()
{
 float a,b,c,D,r1,r2;
 printf("Enter the value of coefficients of the quadratic equation:");
 scanf("%f%f%f",&a,&b,&c);
 if(a==0)
  {
   printf("The given equation is not a quadratic equation. Hence roots cannot be found");
  }
 else
  {
   printf("The given equation is a quadratic equation");
  }
   {
     D=b*b-4*a*c;
     if(D==0)
       {
         printf("The given equation has real and equal roots");
         r1=r2=-b/2*a;
         printf("r1=r2=%f\n",r1);
       }
     else if(D>0)
       {
         printf("The given equation has real and distinct roots");
         r1=(-b+sqrt(D))/2*a;
         r2=(-b+sqrt(D))/2*a;
         printf("%f%f",r1,r2);
       }
     else if(D<0)
       {
         printf(" The given equation has real and imaginary roots");
         float real=(-b)/(2.0*a);
         float img= (sqrt(D))/(2.0*a);
         printf("r1=%f+i%f",real,img);
         printf("r2=%f-i%f",real,img);
       }
    }
 }

