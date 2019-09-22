#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

  char str[50], *p,  i; // Initializing variables
  
  p = &str[i]; // p points to i of str's address
  
  printf("Enter a string to be encrypted:  "); 

  fgets(str, 50, stdin); // Enter a string
  
  while(*p) // While what p points to is not 0... 
    {
      printf("%c", *p+12); // Print what p is pointing to +12
    
      *p++; // Increment what p is pointing to
    }

 
  return 0;
}








