//程序清单 3.10 使用转义序列
#include <stdio.h>
int main(void)
{
	float salary;

	printf("\aEnter your desired monthly salary: ");//1
	printf("$_______\b\b\b\b\b\b\b");				//2
	scanf_s("%f", &salary);
	printf("\n\t$%.2f a month is $%.2f a year.",
		salary, salary * 12.0);						//3
	printf("\rGee!\n");								//4

	return 0;
}