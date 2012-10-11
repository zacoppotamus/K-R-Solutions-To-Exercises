#include <stdio.h>
#define TRUE 1
#define FALSE 0
int main (int argc, char *argv[])
{
  int c;
  int prevblank;
  while ((c==getchar()) != EOF)
  {
    if (c=='\n'||c=='\t'||c==' ')
    {
      if (prevblank==FALSE)
      {
         putchar('\n'); 
         prevblank = TRUE;
      }
      else
      {
        prevblank=FALSE;
        putchar(c);
      }
     }
  }
  return 0;
}

