#include <stdio.h>

int main()
{
  long nc;
  while((nc = getchar()) != EOF) {
    ++nc;
  }
  printf("%ld\n", nc);
  
  return 0;
}
