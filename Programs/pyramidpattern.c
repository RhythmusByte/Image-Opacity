// Displaying a pyramid pattern with numbers

#include <stdio.h>
#include <string.h>
int main () {
	char number[20];
	printf("Enter numbers for pattern (Ex: 12345):");
	scanf("%s",number);
	int len = strlen(number);
	
	for(int i=0; i<len; i++)
	{
		for(int j = i; j<len; j++)
		{
			printf("%c",number[j]);
		}
		printf("\n");
	}
	return 0;
}
