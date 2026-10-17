#include <stdio.h>
#include <stdlib.h>


char data;

int main(int argc, char* argv[]) // taking command line args
{ 

  FILE *fptr; // creating a file pointer
  fptr = fopen(argv[1],"r");
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
  fclose(fptr); //closing the file 
  return 0;
}

