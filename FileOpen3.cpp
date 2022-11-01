//Using fputs to output a list of strings to a files

#include<stdio.h>
#include<string.h>
using namespace std;
#define MAXLen 80
int main()
{
	FILE *fp;
	char name[MAXLen];
	fp=fopen("myfile3.txt","w");
	if(fp==NULL)
	{
		printf("\n Cannot open file");
		return 0;
	}
	printf("\n Enter list of names to store (Quit by pressing ENTER only):");
	do{gets(name);
	if(strlen(name)==0)
	break;
	fputs(name,fp);
	fputs("\n",fp);
}while(1);
	fclose(fp);
}
