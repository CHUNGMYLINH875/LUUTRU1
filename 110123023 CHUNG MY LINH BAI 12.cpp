#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
 int main()
        {FILE * fp
        char filename[67], ch;
              printf ("Filename:");
              get(filename);
        if((fp = fopen (filename,"w")) == NULL)
   {          printf ("Create file error \n");
              exit(1);
   } 
        while (( ch = getche()) !'\n' )
               putc ( ch, fp );
		       fclose ( fp );
	return 0;	
		   
 }
 
