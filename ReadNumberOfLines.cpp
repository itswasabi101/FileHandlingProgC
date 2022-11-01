



#include <stdio.h>

#define FILENAME "abc1.txt"

int main()
{
	FILE *fp;
	char ch;
	int linesCount=0;
	
	
	fp=fopen(FILENAME,"r");
	if(fp==NULL)
	{
		printf("File \"%s\" does not exist!!!\n",FILENAME);
		return -1;
	}

	
	while((ch=fgetc(fp))!=EOF)
	{
		if(ch=='\n')
			linesCount++;
	}
	
	fclose(fp);
	
	printf("Total number of lines are: %d\n",linesCount);
	
	return 0;	
}
