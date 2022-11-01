//Writing the contents a structure type data into a binary data file
#include<iostream>
#include<stdio.h>
#include<string.h>
#define MAXLen 30

struct bank
{ 
 char name[MAXLen];
 int acc;
 float balance;
} CalBr;

int main()
{
	FILE *fp;
	fp=fopen("abc4.txt","wb");
	if(fp==NULL)
	{
		printf("\n Cannot open file ");
		exit(1);
	}
	printf("\n#### Enter account information ####\n");
	do{ printf("\n Enter Name of account holder (Press enter to end list):");
	fflush(stdin);
	gets(CalBr.name);
	if(strlen(CalBr.name)==0)break;
	printf("\n Enter account number :");
	scanf("%d",&CalBr.acc);
	printf("\n Enter current balance(Rs.):");
	scanf("%f",&CalBr.balance);
	fwrite(&CalBr,sizeof(CalBr),1,fp);
	} while(1);
	fclose(fp);
}
 
