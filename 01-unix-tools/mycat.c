#include <stdio.h>
#include <stdlib.h>

int args = 1;
FILE *fptr; // creating a file pointer
int main(int argc, char* argv[]) // taking command line args
{ 
  
  while(args < argc)
  {
    int data = 0;   
    fptr = fopen(argv[args],"r");
    if(fptr == NULL)
    {
      printf("File could not be opened.\n");
      args+=1;
      continue;
    }
    while(1) 
    { 
      data =  fgetc(fptr);
      if(data==EOF)
        break;
      printf("%c",data);
      
    }
    fclose(fptr); //closing the file 
    args+=1; 

  } 
  return 0;
}

