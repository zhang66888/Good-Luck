#include <stdio.h>  
#include <conio.h>  
 
#define PI 3.14 
 
void main()                  
{ 
 int r = 0;   
 int k = 0; 
 
 printf("������뾶r: \n"); 
 scanf("%d",&r); 
 
 printf("\n\n�����봦��Ҫ��\n  1. ����Բ����� \n  2. ����Բ���ܳ�\n  3. ����Բ���ܳ���Բ����� \n"); 
 scanf("%d",&k); 
 
 while(1) 
 { 
 switch(k) 
 { 
 case 1: 
  printf("Բ�����Ϊ: %.2f\n",PI*r*r);  
  break; 
 case 2: 
  printf("Բ���ܳ�Ϊ: %.2f\n",2*PI*r);  
  break; 
 case 3: 
  printf("Բ�����Ϊ: %.2f\n",PI*r*r);   
  printf("Բ���ܳ�Ϊ: %.2f\n",2*PI*r);   
  break; 
 default: 
  printf("����Ҫ��!! \n"); 
  break; 
 } 
 
 printf("\n\n�����봦��Ҫ��\n  1. ����Բ����� \n  2. ����Բ���ܳ�\n  3. ����Բ���ܳ���Բ����� \n"); 
 scanf("%d",&k); 
 } 
 
 getch(); 
}