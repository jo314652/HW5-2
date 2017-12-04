
#include<stdio.h>
#include<stdlib.h>
void stringReverse(char data[]);
char strings[] = " Steven is handsome";
int i = 0;
int main(void)
{

	i = sizeof(strings)-1;
	for (int x = 0; x < i; x++)
	{
		printf("%c", strings[x]);
	}
	printf("\n");
	stringReverse(strings);
	printf("\n");
	system("pause");
	return 0;
}

void stringReverse(char data[]){
	printf("%c", strings[i]);
	if (i != 0){
		i--;
		stringReverse(strings);
	}
}