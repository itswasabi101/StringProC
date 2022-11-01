//checking if string is palindrome using string function 

#include<stdio.h>
#include<string.h>
#define MAX_SIZE 100

int main()
{
	char str[MAX_SIZE],reverse[MAX_SIZE];
	int flag;
	
	printf("Enter any string :");
	gets(str);
	
	strcpy(reverse,str);
	strrev(reverse);
	
	flag=strcmp(str,reverse);
	
	if(flag==0)
	{
		printf("String is palindrome ");
	}
	else
	{
		printf("String is not palindrome ");
	}
	return 0;
}


