#include <stdio.h>

int main (int argc, char *argv[])
{
  int c,nl,blanks,tabs=0;
  while ((c==getchar()) != EOF)
  {
    if (c='\n')
      nl++;
    else if (c=' ')
      blanks++;
    else if (c='\t')
      tabs++;
  }
  printf("Number of lines:%d\n
      Number of blanks:%d\n
      Number of tabs:%d\n", nl,blanks,tabs);
  return 0;
}
