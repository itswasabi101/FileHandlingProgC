//Using fprintf to output a formatted data to a file

#include<stdio.h>
int main()
{
	FILE *fp;
	int acc;
	float balance;
	fp=fopen("myfile4.txt","w");
	if(fp==NULL)
	{
		printf("\n Cannot open file");
		return 0;
	}
	do{printf("\n Enter customer account number (press 0 to end):");
	    scanf("%d",&acc);
	    if(acc==0)
	    break;
	    printf("\n Enter customer account balance:");
	    scanf("%f",&balance);
	    fprintf(fp,"%-5d%-10.2f",acc,balance);
	}while(1);
	fclose(fp);
}
