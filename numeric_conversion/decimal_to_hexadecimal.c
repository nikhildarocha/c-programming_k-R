#include <stdio.h>


void decimal_to_hexadecimal(int decimal_number)
{
  
  int remainder, quotient;
  int index =0;
  char arr[100];
  

  while(decimal_number != 0) {
    int temp = 0;
    
    temp = decimal_number%16;
  
   
    if(temp < 10)
    {
      arr[index] = temp + 48;
      index += 1;
    }
    else
    {
      arr[index] =  temp + 55;
      index += 1;
    }
      
    decimal_number = decimal_number/16;
    
  }
  
 
  for(int i = index -1; i >=0; i--)
  {
    printf("%c ",arr[i]);
  }
  
}

int main()
{  
  
  int decimal_number;
  printf("Enter a decimal number\n");
  scanf("%d", &decimal_number);
  decimal_to_hexadecimal(decimal_number);
  
  return 0;
  
}
