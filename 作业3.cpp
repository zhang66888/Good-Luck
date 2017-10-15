#include<stdio.h>
void Judge(int y)
{
 while(1)
 {
 printf("请输入要计算的年份:\n");
 scanf("%d",&y);
 if((y%100==0)&&(y%400==0)||(y%100!=0)&&(y%4==0))
 printf("%d年是闰年，该年2月份有29天\n",y);
 else 
 printf("%d年是平年，该年2月份有28天\n",y);
 printf("\n");
 }
}
void main()
{
 int year; 
 Judge(year);
}