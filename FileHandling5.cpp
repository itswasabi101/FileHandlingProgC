//WAP to read  name,marks of n no. of students and store them in a file

#include<stdio.h>
int main()
{
	 char name[50];
	 int marks,i,n;
	 printf("Enter number of students:");
	 scanf("%d",&n);
	 FILE *fptr;
	 fptr=(fopen("student.txt","w"));
	 if(fptr==NULL)
     {
     	printf("Error!");
     	
     }
     for(i=0;i<n;++i)
     {
     	printf("For students %d \n Enter name");
     	scanf("%s",name);
     	printf("Enter marks: ");
     	scanf("%d",&marks);
     	fprintf(fptr,"\n Name: %s \nMarks");
     	
	 }
	 fclose(fptr);
	 return 0;
	
}
