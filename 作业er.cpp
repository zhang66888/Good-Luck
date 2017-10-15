#include<stdio.h>
#include<math.h>
void main()
{
          double a,b,c,d,s,q;
          printf("输入三边长");
          scanf("%d%d%d",&a,&b,&c);
          d=fabs(a-b);
          if(d<c&&a+b>c)
         {
              q=(a+b+c)/2;
               printf("%f",s=sqrt(q*(q-a)*(q-b)*(q-c)));
         }
           else
                printf("非三角形");
         }