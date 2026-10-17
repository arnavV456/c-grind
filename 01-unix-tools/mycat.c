#include <stdio.h>
#include <stdlib.h>


char data;
int args = 1;
FILE *fptr; // creating a file pointer
int main(int argc, char* argv[]) // taking command line args
{ 
  while(args < argc)
  {
    printf("%s\n",argv[args]);
   
    fptr = fopen(argv[args],"r");
    if(fptr == NULL)
    {
      printf("File could not be opened.\n");
    }
    else
    {
      printf("Here are the file contents: \n");
    }
    while(1) 
    { 
      if(feof(fptr))
        break;
      data =  fgetc(fptr);
      printf("%c",data);
    }
    
    args+=1; 
    fclose(fptr); //closing the file 
  } 
  return 0;
}

