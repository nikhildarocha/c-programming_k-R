#include <stdio.h>

#define NONBLANK 'a'

int main()
{
  int c;
  int lastc = NONBLANK;
  
  while((c = getchar()) != EOF) {
    if(c != ' ')
      putchar(c);
    else if (lastc != ' ')
      putchar(c);
    lastc = c;
  }
 
}
  
