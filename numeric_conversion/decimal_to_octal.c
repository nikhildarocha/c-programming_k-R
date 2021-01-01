#include <stdio.h>

int main()
{

  int decimal_number = 16;
  
  int remainder, quotient;
  
  int index =0;
  
  int arr[100];
  
  int length = sizeof(arr)/sizeof(arr[0]);
  
  printf("The length of the array is %d\n", length);
  

  
  while(decimal_number != 0) {
  
    remainder = decimal_number%8;
    arr[index] = remainder;
    decimal_number = decimal_number/8;
    index += 1;
  }
  
  printf("The remainder is %d\n", remainder);
  printf("The 0th position of the array is %d\n", arr[0]);
  printf("The 1st position of the array is %d\n", arr[1]);
  
  
  for(int i = index -1; i >0; i--)
  {
    printf("The Octal number is %d ",arr[i]);
  }
   
  return 0;
  
}

