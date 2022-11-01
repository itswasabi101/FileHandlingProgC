

#include<stdio.h>
int main()
{
	FILE *fp;
	char fName[20];
	printf("Enter the file name to create :");
	scanf("%s",fName);
	
	fp=(fopen(fName,"w"));
	
	if(fp==NULL)
	{
		printf("File is not created ");
		exit(0);
	}
	printf("File created successfully");
	return 0;
}
