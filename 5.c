#include<stdio.h>
#include<math.h>
int main()
{int a,b,c,d,e,f,g;
float i,h;
printf("distance b/w a (a,b) point and a line cx+dy+e");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
f=a*c+b*d+e;
g=c*c+d*d;
h=sqrt(g);
i=f/h;
printf("%f",i);
}


