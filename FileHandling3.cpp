//Using fprintf() to output formatted data to a file
#include<iostream>
#include<stdio.h>
int main()
{
	FILE *fp;
	int acc;
	float balance;
	fp=fopen("abc3.txt","w");
	if(fp==NULL)
	{
		printf("\n Cannot open file");
		exit(1);
	}
	do{printf("\n Enter customer account number (press 0 to end):");
	scanf("%d",&acc);
	if(acc==0)
	break;
	printf("\n Enter customer account balance :");
	scanf("%f",&balance);
	fprintf(fp,"-5d%-10.2f",acc,balance);
	
	}while(1);
	fclose(fp);
}
