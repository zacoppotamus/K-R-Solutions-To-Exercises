#include <stdio.h>
#define IN 1
#define OUT 0

int main (int argc, char *argv[])
{
  int c;
  int nl,nw,nc=0;
  int state;
  state = OUT;
  while ((c=getchar())!=EOF)
  {
    nc++;
    if (c=='\n')
      nl++;
    if (c==' ' || c=='\t' || c=='\n')
      state = OUT;
    else if (state = OUT)
    {
      state = IN;
      nw++;
    }
  }
  printf("Word Count:%d\tNumber of Lines:%d\tCharacters:%d",nw,nl,nc);
  return 0;
}
