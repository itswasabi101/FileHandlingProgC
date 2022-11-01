//Using fprintf() to output string and numeric data to a file

#include<iostream>
#include<stdio.h>
#include<string.h>
#define MAXLen 80

int main()
{
	FILE *fp;
	char name[MAXLen];
	int acc;
	float balance;
	fp=fopen("abc1.txt","w");
	if(fp==NULL)
	{
		printf("\n Cannot open file");
		exit(1);
	}
	do{printf("\n Enter customer name (press only ENTER to end):");
	fflush(stdin);
	gets(name);
	if(strlen(name)==0)
	break;
	printf("\n Enter customer account number :");
	scanf("%d",&acc);
	printf("\n Enter customer account balance :");
	scanf("%f",&balance);
	fprintf(fp,"%s\n%d\n%.2f\n",name,acc,balance);
	
	}
	while(1);
	fclose(fp);
}
