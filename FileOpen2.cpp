//Using fputs to output string data to a file
#include<stdio.h>
using namespace std;
#define MAXLen 80
int main()
{
	 FILE *fp;
	 char sent[MAXLen];
	 fp= fopen("myfile2.txt","w");
	 if(fp==NULL)
	 {
	 	printf("\n Cannot open file");
	 	return 0;
		 
	 }
	 printf("\nEnter sentence to store:");
	 gets(sent);
	 fputs(sent,fp);
	 fputs("\n",fp);
	 fclose(fp);
}
