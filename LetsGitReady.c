#include<stdio.h>

void printNumpad(int Numpad[][3])
{
	int i, j;
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("   %d", Numpad[i][j]);
		}
		printf("\n"); 
	}
	
	printf(" + - * / = \n\n\n"); 
}

int main()
{
	int Numpad[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	char operand;
	int num1;
	int num2;
	//int i, j;
	int ans;
	
	printNumpad(Numpad);
	
	printf("enter 1st number:\n");
	scanf("%d", &num1);
	
	do
	{
		printf("enter operand:\n");
		scanf(" %c", &operand);	
		
		if(operand != '+' && operand != '-' && operand != '*' && operand != '/')
		{
			printf("invalid operand!/n");	
		}	
	} 
	while(operand != '+' && operand != '-' && operand != '*' && operand != '/');
	
	printf("enter 2nd number:\n");
	scanf("%d", &num2);
	
	if(operand == '+')
	{
		ans = num1 + num2;
	}
	else if(operand == '-')
	{
		ans = num1 - num2;
	}
	else if(operand == '*')
	{
		ans = num1 * num2;
	}
	else if(operand == '/')
	{
		ans = num1 / num2;
	}
	
	printf("Ans: %d", ans);
	
	return 0;
}
