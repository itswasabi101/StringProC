

//calculate length of string 

#include<stdio.h>
#include<conio.h>

void main()
{
	char string[10],temp;
	int ctr=0,i;
	printf("Enter a string :");
	gets(string);
	for(i=0;string[i]!='\0';i++)
	{
		ctr++;
	}
	printf("The length of the string is : %d",ctr);
}
