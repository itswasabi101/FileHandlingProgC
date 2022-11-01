

#include<stdio.h>

#include<string.h>

int main()
{
	FILE *fp;
	fp=fopen("input.text","w");
	if(fp==NULL)
	{
		printf("Cannot open file");
		exit(1);
	}
	
}
