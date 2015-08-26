#include <stdio.h>
#include <stdlib.h>

int fonction_strlen(char *str)
{
	int size = 0;
	while(str[size]!='\0')
	{
		size++;
	}	
	return size;
}


int main (void)
{
	printf("Hello World!\n");
	return 0;
}
