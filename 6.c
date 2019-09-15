#include<stdio.h>
#include<math.h>
int main()
{int a,b,c,d,e;
float f;
printf("enter any no. to the eqn of circle x^2+y^2+ax+by+c=0");
scanf("%d%d%d",&a,&b,&c);
e=((a*a)/4+(b*b)/4-c);
f=sqrt(e);
printf("%f\n",f);
printf("(%d,%d)",-a/2,-b/2);

}
