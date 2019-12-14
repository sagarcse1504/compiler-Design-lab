#include <stdio.h>
#include <stdlib.h>

int main() {
   FILE *fp;
   char ch;
   int count=0;
     int characters, words, lines, digit;
   int linesCount=0;
   //open file in read more
   fp=fopen("g.txt","r");
   if(fp==NULL) {
      printf("Some problem in opening the file");
exit(0);
   }
   //read character by character and check for new line
  // while((ch=fgetc(fp))!=EOF) {
    characters = words = lines = digit= 0;
    while ((ch = fgetc(fp)) != EOF)
    {
        characters++;

        /* Check new line */
        if (ch == '\n' || ch == '\0')
            lines++;

            if(ch=='0' && ch=='9')
                digit++;

        /* Check words */
        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')
            words++;
    }

    /* Increment words and lines for last word */
    if (characters > 0)
    {
        words++;
        lines++;
    }

    /* Print file statistics */
    printf("\n");
    printf("Total characters = %d\n", characters);
    printf("Total words      = %d\n", words);
    printf("Total lines      = %d\n", lines);
     printf("Total digit      = %d\n", digit);
   fclose(fp);
   //print number of lines

   return 0;
}
