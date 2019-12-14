    #include <stdio.h>

#define MAXCHAR 1000
int main() {

    //File Read variable;
    FILE *fp;
    char str[MAXCHAR];
    char* filename = "test.txt";
    // Token Variable;
    const char str1[80] = "", s[2] = " ";
    char *token;
    int counter=1;


    fp = fopen(filename, "r");
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

     // File write;
     //fp = fopen(filename, "w");
   }

    // main printf;
    printf("%s", str);
    fclose(fp);


    return 0;

}
