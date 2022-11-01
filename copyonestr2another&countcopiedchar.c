
//program to copy one string to another and count copied caharaters 


#include <stdio.h>


int copy_string(char *target, char *source)
{

	int len=0;
	
	
	while(source[len] != '\0')
	{
		target[len] = source [len];
		len++;
	}

	target[len] = '\0';
	
	
	return len;
}


int main()
{

	char str1[]="This is a test string";

	char str2[30];

	int count;
	

	count = copy_string(str2,str1);
	

	printf("Source string (str1): %s\n",str1);
	printf("Target string (str2): %s\n",str2);
	printf("Copied characters are: %d\n",count);
	
	return 0;	
}
