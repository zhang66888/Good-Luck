void main()
{
	int value;
	scanf("������һ������:%d",&value);
	if(value%3==0&&value%7==0)
	{
		printf("��ͬʱ��3��7����");
	}
	else if(value%3==0)
	{
		printf("��ͬʱ��3����");
	}
	else if(value%7==0)
	{
		printf("��ͬʱ��7����");
	}
	else{printf("���ܱ���һ��������");
	}
}



