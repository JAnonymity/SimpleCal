#include<stdio.h>

void menu()
{
	printf("******Simple Calculator******\n");
	printf("******   1.add 2.sub   ******\n");
	printf("******   3.mul 4.div   ******\n");
	printf("*****************************\n");
}

int add(int a,int b)
{
	return a+b;
}

int sub(int a,int b)
{
	return a-b;
}

int mul(int a,int b)
{
	return a*b;
}

int div(int a,int b)
{
	return a/b;
}

void main()
{
	int input=0,res=0,a,b;
	int (*opt[5])(int,int)={NULL,&add,&sub,&mul,&div};
	do
	{
		menu();	
		scanf("%d",&input);
		if(input<1||input>4)
		{
			input=0;
			printf("input error! Please input again!\n");
			continue;
		}
		printf("a,b:");
		scanf("%d %d",&a,&b);
		
		res=(opt[input])(a,b);
	}while(input==0);
	
	printf("res=%d\n",res);
}
