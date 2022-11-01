

//program to remove a word from a string 

#include<stdio.h>

void main()
{
    char str[100],sstr[100];
	int pos,l,c=0;
	printf("Extracting a substring from a given string \n");
	printf("Input the string ");
	fgets(str,sizeof str ,stdin);
	printf("Input the position of start extraction :");
	scanf("%d",&pos);
	printf("Input the length of the substring :");
	scanf("%d",&l);
	while(c<l)
	{
		sstr[c]=str[pos+c-1];
		c++;
		
	}
	sstr[c]='\0';
	printf("The substring retrieve from the string is :\ %s \n",sstr);
}
