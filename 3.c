#include<stdio.h>
#include<math.h>
int main()
{float a,b,c,d,e,f,g,h,i,s,x,l,m,n;
printf("enter three coordinate to get area of the triangle form by that three coordinate");
scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
g=(a-c)*(a-c)+(b-d)*(b-d);
h=(a-e)*(a-e)+(b-f)*(b-f);
i=(c-e)*(c-e)+(d-f)*(d-f);
l=sqrt(g);
m=sqrt(h);
n=sqrt(i);
s=((l+m+n)/2);
x=sqrt((s-l)*(s-m)*(s-n));
printf("%f",x);
}
