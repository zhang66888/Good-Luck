#include<stdio.h>
void main()
{
	int x;
	printf("Enter number:\n");
	scanf("%d",&x);
	if (x>=1000)
	{
		printf("%d is great than 1000\n",x);
	}
	else if(x>=100)
	{
		printf("%d is 100 to 999\n",x);
	}
	else if(x>=10)
	{
		printf("%d is 10 to 99");
	}
	else
			printf("%d is less than 10\n");
}