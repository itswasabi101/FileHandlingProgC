//WAPC to find the number of lines in a text file 

#include <stdio.h>
#define FSIZE 100
 
int main()
{
    FILE *fptr;
    int ctr = 0;  
    char student[FSIZE];
    char c; 
    printf("\n\n Read the file and count the number of lines :\n");
	printf("--------------------------------------------------\n"); 
	printf(" Input the file name to be opened : ");
	scanf("%s",student);

    fptr = fopen(student, "r");
    if (fptr == NULL)
    {
        printf("Could not open file %s", student);
        return 0;
    }
    
    for (c = getc(fptr); c != EOF; c = getc(fptr))
        if (c == '\n') 
            ctr = ctr + 1;
    fclose(fptr);
    printf(" The lines in the file %s are : %d \n \n", student, ctr-1);
    return 0;
}
