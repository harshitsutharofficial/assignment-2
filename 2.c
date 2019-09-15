#include<stdio.h>
#include<math.h>
int main()
{float a,b,c,d,e,f;
printf("distance b/w two point");
scanf("%f%f%f%f",&a,&b,&c,&d);
e=(a-c)*(a-c)+(b-d)*(b-d);
f=sqrt(e);
printf("%f",f);}
