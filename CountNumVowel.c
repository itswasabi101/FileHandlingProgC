#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define FILENAME  "abc3.txt"

int no_of_vowels(char file[256])
{
	FILE *fp;
	char c;
	int count=0;
	fp=fopen(FILENAME,"r");
	if(fp==NULL)
	{
		printf("Unable to open the file");
		return -1;
	}
	while((c=fgetc(fp)) != EOF)
	{
		switch(c)
		{
			case 'a':
			case 'e':
			case 'i':
		    case 'o':
		    case 'u':
		    case 'A':
		    case 'E':
		    case 'I':
		    case 'O':
		    case 'U':
		    	++count;
		    	
		}
	}
	return count ;
}
void print_file(char file[256])
{
	FILE *fp;
	char c;
	fp=fopen(FILENAME,"r");
	
	if(fp==NULL)
	{
		printf("Unable to open the file");
		return;
		
	}
	while((c=fgetc(fp)) != EOF)
	{
		printf("%c",c);
		
	}
	
}
int main()
{
	char file[256];
	printf("Enter file name :");
	gets(file);
	printf("\n Content of input file");
	print_file(file);
	printf("\n");
	printf("Number of vowels = %d ",no_of_vowels(file));
}



