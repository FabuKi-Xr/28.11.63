#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void palindrome(int*, int*);
int main() {
	struct numberinput 
	{
		int num1 = 0,*n1;
		int num2 = 0,*n2;
	}input[20];
	int n = 0, temp = 0;
	//int num1, num2;
	printf("====Find palindrome number between your inputs!====");
	printf("\nhow many pairs of number you want to find? :");
	scanf("%d",&n);
	//scanf_s("%d %d", &num1, &num2);
	if (n = 0) 
	{ 
		printf("You didnt want to find it\n"); 
	}
	else 
	{
		for (int i = 0;i < n;i++)
		{
			printf("\ncouple[i] :");
			scanf("%d %d", &input[i].num1, &input[i].num2);
			input[i].n1 = &input[i].num1;
			input[i].n2 = &input[i].num2;
			if (input[i].num1 > input[i].num2)
			{
				temp = *input[i].n2;
				*input[i].n2 = *input[i].n1;
				*input[i].n1 = temp;
			}
		}
		printf("Result :\n");
		for (int i = 0;i < n;i++)
		{
			printf("couple[%d][%d-%d]",i,*input[i].n1,*input[i].n2);
			//finding(str_input[i].p, w);
			printf("\n");
		}
	}
	
	return 0;
}
void palindrome(int* x, int* y)
{
	int i=0,j=0;
	int tempx = 0, tempy = 0;
	int val = 0, check = 0;
	for (i = *x;i <=*y;i++) {
		tempx = i;
		tempy = i;
		for (j = 1;tempx > 0;j++) {
			val = tempx % 10;
			check = (check * 10) + val;
			tempx /= 10;
		}
		if (check == tempy) printf("%d\t", tempy);
		check = 0;
	}
}