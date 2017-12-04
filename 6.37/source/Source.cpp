#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int recursiveMaximum(int data[], int num);

int main(void)
{
	int i;
	int ary[SIZE] = { 10, 17, 20, 83, 65, 49, 78, 32, 44, 51 };
	printf("Data : ");
	for (i = 0; i < SIZE; i++)
	{
		printf("%d ", ary[i]);
	}

	printf("\nMaximum number : %d\n", recursiveMaximum(ary, SIZE));
	system("pause");
	return 0;

}
int recursiveMaximum(int data[], int num)
{
	int max_data;

	if (num == 1)
	{
		return data[0];
	}
	else
	{
		max_data = recursiveMaximum(data, num - 1);
		if (data[num - 1] > max_data)
		{
			return data[num - 1];
		}
		else
		{
			return max_data;
		}

	}
}