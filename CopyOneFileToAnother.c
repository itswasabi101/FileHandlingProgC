#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE *fptr1, *fptr2;
	char ch, fname1[20], fname2[20];

	printf("\n\n Copy a file in another name :\n");

	printf(" Input the source file name : ");
	scanf("%d",fptr1);
	fptr1=fopen(fptr1, "r");
	if(fptr1==NULL)
	{
		printf(" File does not found or error in opening.!!");
		exit(1);
	}
	printf(" Input the new file name : ");
	scanf("%s",fptr2);
	fptr2=fopen(fptr2, "w");
	if(fptr2==NULL)
	{
		printf(" File does not found or error in opening.!!");
		fclose(fptr1);
		exit(2);
	}
	while(1)
	{
		ch=fgetc(fptr1);
		if(ch==EOF)
		{
			break;
		}
		else
		{
			fputc(ch, fptr2);
		}
	}
	printf(" The file %s  copied successfully in the file %s. \n\n",fname1,fname2);
	fclose(fptr1);
	fclose(fptr2);
	getchar();
}
