#include <stdio.h>  
#include <conio.h>  
 
#define PI 3.14 
 
void main()                  
{ 
 int r = 0;   
 int k = 0; 
 
 printf("请输入半径r: \n"); 
 scanf("%d",&r); 
 
 printf("\n\n请输入处理要求\n  1. 计算圆的面积 \n  2. 计算圆的周长\n  3. 计算圆的周长和圆的面积 \n"); 
 scanf("%d",&k); 
 
 while(1) 
 { 
 switch(k) 
 { 
 case 1: 
  printf("圆的面积为: %.2f\n",PI*r*r);  
  break; 
 case 2: 
  printf("圆的周长为: %.2f\n",2*PI*r);  
  break; 
 case 3: 
  printf("圆的面积为: %.2f\n",PI*r*r);   
  printf("圆的周长为: %.2f\n",2*PI*r);   
  break; 
 default: 
  printf("错误要求!! \n"); 
  break; 
 } 
 
 printf("\n\n请输入处理要求\n  1. 计算圆的面积 \n  2. 计算圆的周长\n  3. 计算圆的周长和圆的面积 \n"); 
 scanf("%d",&k); 
 } 
 
 getch(); 
}