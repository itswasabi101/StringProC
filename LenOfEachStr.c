//c program to read n strings and print each strings length 

#include <stdio.h>
#include <string.h>

int main()
{

	char string[10][30]; 
	int i, n;


	printf("Enter number of strings to input\n");
	scanf("%d", &n);


	printf("Enter Strings one by one: \n");
	for(i=0; i< n ; i++) {
		scanf("%s",string[i]);
	}

	
	printf("The length of each string: \n");
	for(i=0; i< n ; i++) {
	
		printf("%s  ", string[i]);

	
		printf("%d\n", strlen(string[i]));
	}


	return 0;
}

