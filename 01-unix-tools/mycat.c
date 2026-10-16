#include <stdio.h>
#include <stdlib.h>


char data[50];

int main()
{
  FILE *fptr;
  fptr = fopen("text.txt","r");
  if(fptr == NULL)
  {
    printf("File could not be opened.\n");
  }
  else
  {
    printf("Here are the file contents: \n");
  }
  while(fgets(data,50,fptr) != NULL)
  {
    printf("%s",data);
  }
  return 0;
}
