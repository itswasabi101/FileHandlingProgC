//To copy content of one file to another file 

#include<stdio.h>
int main()
{
	FILE *fs,*ft;
	char letter;
	char myfile[80],target[80];
	printf("\n Enter source file name with path of the file to copy : \n");
	gets(myfile);
	fs=fopen("myfile16.txt","r");
	if(fs==NULL)
	{
		printf("\n Cannot open file to be copied");
		
	}
	printf("\n Enter target file name with path of the file : \n");
	gets(target);
	ft=fopen(target,"w");
	if(ft==NULL)
	{
		printf("\n Cannot open new file");
		
	}
	do
	{1
		letter=fgetc(fs);
		if(letter == EOF)
		break;
		fputc(letter,ft);
		
	}while(1);
	printf("\n File successfully copied from source to target");
	fclose(fs);
	fclose(ft);
	
}
