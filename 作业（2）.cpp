#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	if(n<10)
		printf("%d is<10\n",n);
	else if(n<=99)
		printf("%d is10 to 99\n",n);
	else if(n<=999)
		printf("%d is100 to 999\n",n);
	else
		printf("%d is>=1000\n",n);
0}




