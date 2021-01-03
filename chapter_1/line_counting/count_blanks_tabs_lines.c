#include <stdio.h>

int main()
{

 int bl, tb, nl, c;
 nl=tb=bl=0;
 
 while((c = getchar()) != EOF) {
   if (c == '\n') {
     ++nl;
   }
   if (c == '\t') {
     ++tb;
   }
   if (c == ' ') {
     ++bl;
   }
 }
 printf("Number of new lines is %d\n", nl);
 printf("Number of tabs is %d\n", tb);
 printf("Number of blanks is %d\n", bl);
 
 return 0;

}
