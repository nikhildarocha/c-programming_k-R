#include <stdio.h>


void decimal_to_octal(int decimal_number)
{
  
  int remainder, quotient;
  int index =0;
  int arr[100];
  

  while(decimal_number != 0) {
  
    remainder = decimal_number%8;
    arr[index] = remainder;
    decimal_number = decimal_number/8;
    index += 1;
  }
  
 
  for(int i = index -1; i >0; i--)
  {
    printf("The Octal number is %o\n",arr[i]);
  }
  
}

int main()
{  
  
  int decimal_number;
  printf("Enter a decimal number\n");
  scanf("%d", &decimal_number);
  decimal_to_octal(decimal_number);
  
  return 0;
  
}



