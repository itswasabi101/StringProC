/* C program to remove all the characters 
* from the alphanumeric string
*/

#include <stdio.h>
#include <string.h>

int RemoveChars(char *string)
{
	int length=0,i=0,j=0,k=0;

	length = strlen(string);

	for(i=0;i<length;i++)
	{
		for(j=0;j<length;j++)
		{
			if((string[j]>='a' && string[j]<='z') || (string[j]>='A' && string[j]<='Z'))
			{
				for(k=j;k<length;k++)
				{
					string[k] = string[k+1];
				}
				length--;
			}
		}
	}
}


int main()
{
	char string[50]={0};

	printf("\nEnter the string : ");
	gets(string);


	RemoveChars(string);
	printf("Final string is : %s",string);
	return 0;
}
