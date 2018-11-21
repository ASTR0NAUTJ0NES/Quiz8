/* This example shows how to use file pointers */



#include <stdio.h>
#include <stdlib.h> //for exit()

int main(int argc, char **argv)
{
   FILE *infile;
   char c;
   int i;

   outfile=fopen("mycatResult.txt", "w");

   // go through every file in command line parameters 
   for (i=1;i<argc;i++) {
     // open every file in command line parameters 
     if ((infile=fopen(argv[i],"r")) != NULL) {
       // read and display every character in input file
       while (!feof(infile)) {
           fscanf(infile, "%c", &c);
           printf("%c", c);
       } // while
     } // if
     fclose(infile);
   } // for

   return 0;
} // main
