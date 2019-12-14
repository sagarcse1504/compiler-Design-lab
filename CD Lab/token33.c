#include<stdio.h>
#define MAXCHAR 1000
int main()
{

    //File Read variable;
    FILE *fp, *fPtr;
    char str[MAXCHAR];
    char* filename = "test.txt";
    char* fileoutput = "outputfile.txt";

    // Token Variable;
    const char str1[80] = "", s[2] = " ";
    char *token;
    int counter=1;


    fp = fopen(filename, "r");

    //Write Output;
    fPtr = fopen(fileoutput, "w");

    if (fp == NULL){
        printf("Could not open file %s",filename);
        return 1;
    }



    while (fgets(str, MAXCHAR, fp) != NULL)

   token = strtok(str,s);
   while (token != NULL)

   {

     printf("Token %d = %s \n", counter++, token);
     token = strtok(NULL, s);

     fprintf(fPtr, token);

   }


    fclose(fp);
    fclose(fPtr);


    return 0;

}
