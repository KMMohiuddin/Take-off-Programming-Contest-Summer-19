#include<stdio.h>
int main()
{
    int r1,r2,r3,w1,w2,w3,s,w,x;
    scanf("%d%d%d %d%d%d",&r1,&r2,&r3,&w1,&w2,&w3);
    s=r1+r2+r3;
    w=w1+w2+w3;
   if(w>0&&w<=3)
   {
       x=s/w;
   }
   else if(w==0)
   {
       x=s;
   }
   printf("%d\n",x);
   return 0;
}
