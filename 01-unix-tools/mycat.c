#include <stdio.h>
#include <stdlib.h>


FILE *fptr; // creating a file pointer
int main(int argc, char* argv[]) // taking command line args
{ 

  int args = 1;
  int flag = 0; 
  while(args < argc)
  {
    int data = 0;   
    fptr = fopen(argv[args],"r");
    if(fptr == NULL)
    {
      perror(argv[args]);
      args+=1;
      flag = 1;
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
  if(flag)
    return 1;
  return 0;
}

