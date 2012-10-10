#include <stdio.h>

int main (int argc, char * argv[])
{
  int c;
  while ((c=getchar())!=EOF)
  {
    if (c=='\t')
      printf("\\t");
    if (c=='\b')
      printf("\\b");
    if (c=='\\')
      printf("\\\\");
    else 
      printf("%c",c);
  }
  return 0;
}
