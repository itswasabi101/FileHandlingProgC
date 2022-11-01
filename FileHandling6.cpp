//Program to read name and marks from user and store them in a file. It previously exists ,add the information of n students

#include<stdio.h>
int main()
{
	char name[50];
	int marks,i,n;
	printf("Enter number of students :");
	scanf("%d",&n);
	FILE *fptr;
	fptr=(fopen("student.txt","a"));
	if(fptr==NULL)
	{
		printf("Error!");
	}
	for(i=0;i<n;i++)
	{
		printf("For student %d \n Enter name:",i+1);
		scanf("%s",name);
		printf("Enter marks:");
		scanf("%d",&marks);
		fprintf(fptr,"\n Name: %s \n Marks=%d\n",name,marks);
	
	}
	fclose(fptr);
	return 0;
}
