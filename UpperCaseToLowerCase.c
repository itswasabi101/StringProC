//Program to cinvert uppercase to lowercase 


#include<stdio.h>
#include<string.h>
#define MAX_SIZE 100

int main()
{
	char str[MAX_SIZE];
	printf("Enter any string :");
	gets(str);
	
	strlwr(str);
	
	printf("Lowercase string : %s",str);
	
	return 0;
}
