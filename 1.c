#include<stdio.h>
#include<math.h>
int main()
{float a,b,c,s,x,y;
printf("sum of area of the triangle whose length of 3 side are given");
scanf("%f%f%f",&a,&b,&c);
s=(a+b+c)/2;
x=s*(s-a)*(s-b)*(s-c);
y=sqrt(x);
printf("%f",y);}
