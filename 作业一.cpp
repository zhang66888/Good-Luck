void main()
{
	int value;
	scanf("请输入一个整数:%d",&value);
	if(value%3==0&&value%7==0)
	{
		printf("能同时被3和7整除");
	}
	else if(value%3==0)
	{
		printf("能同时被3整除");
	}
	else if(value%7==0)
	{
		printf("能同时被7整除");
	}
	else{printf("不能被任一个数整除");
	}
}



