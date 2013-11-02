#include<stdio.h>
int main()
{
 int i,a,b,c,t;
 scanf("%d%d%d",&a,&b,&c);
 for(i=0;i<=2;i++)
 {
 if(a<b)
 {
    t=a;
    a=b;
    b=t;
 }
 if(b<c)
 {
 t=b;
 b=c;
 c=t;
 }
 }
 printf("%d%d%d\n",a,b,c);
 return 0;
}
