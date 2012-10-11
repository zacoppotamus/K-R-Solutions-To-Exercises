#include <stdio.h>

int main (int argc, char *argv[])
{
  int prev;
  int c; 

 while ((c=getchar()) != EOF)
 {
   if (c==' ')
     if (prev==0)
     {
       putchar(c);
       prev=1;
     }
   if (c!=' ')
   {
     putchar(c);
     prev=0;
   }
 }
 return 0;
}
