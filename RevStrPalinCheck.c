

//string palindrome

#include<stdio.h>
#include<conio.h>

void main()
{
	char string[10],temp;
	char temp2=" ";
	int ctr=0,i,n;
	printf("Enter a string : \n");
	gets(string);
    n=strlen(string);
	for(i=0;i<n/2;i++)
	{
		if(string[i]==string[n-i-1])
		{
			ctr++;
	    }
	}
	if(ctr==i)
		printf("String is a palindrome");
	else 
	    printf("String is not a palindrome ");
	    
	return 0;
}
