//Using fputs() to output a list of strings to a file 
#include<iostream>
#include<stdio.h>
#include<string.h>
#define MAXLen 80
int main()
{
	FILE *fp;
	char name[MAXLen];
	fp=fopen("abc.txt","w");
	if(fp==NULL)
	{
	  printf("\n Cannot open file");
	  exit(1);
    }
    printf("\n Enter list of names to store (Quit by pressing ENTER only):");
    do{gets(name);
    if(strlen(name)==0)
    break;
    fputs(name,fp);
    fputs("\n",fp);
    
	}
	while(1);
	fclose(fp);
}
