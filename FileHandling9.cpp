//WAPC to store the list of names and phone numbers 
//pg.13-33

#include<stdio.h>
#include<string.h>

struct person
{
	char name[2];
	char phone[2];
	
}p;
int main()
{
	FILE *fp;
	char search[2];
	long int size;
	fp=fopen("myfile16.txt","wb");
	if(fp==NULL)
	{
		printf("\n Cannot open file ");
		
	}
	do{ printf("\n Enter name (press only ENTER to end):");
	gets(p.name);
	if(strlen(p.name)==0)
	break;
	printf("\n Enter phone number :");
	gets(p.phone);
	fwrite(&p,sizeof(p),1,fp);
	}while(1);
	fclose(fp);
	fp=fopen("myfile16.txt","rb+");
	if(fp==NULL)
	{
		printf("\n Cannot open file ");
		
	}
	printf("Enter name for which phone is to be modified");
	gets(search);
	while(fread(&p,sizeof(p),1,fp)==1)
	{
		if(strcmp(search,p.name)==0)
		{
			printf("\n Enter the phone number :");
			gets(p.phone);
			size=sizeof(p);
			fseek(fp,-size,1);
			fwrite(&p,sizeof(p),1,fp);
			break;
			
		}
	}
	fclose(fp);
	fp=fopen("myfile16.txt","rb");
	if(fp==NULL)
	{
		printf("\n Cannot open file ");
		
	}
	printf("\n The modified file is displayed ");
	while(fread(&p,sizeof(p),1,fp)==1)
	printf("\n Name : %s, Phone : %s",p.name,p.phone);
	fclose(fp);
	
}



