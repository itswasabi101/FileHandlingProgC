#include<stdio.h>
using namespace std;
int main()
{
	FILE *fp;
	fp=fopen("Program1.txt","w");
	if(fp==NULL)
	{
		printf("\n Cannot open file");
		return 0;
		
	}
	fclose(fp);
}
