#include <stdio.h>

int main()
{
  int c;

  /* copy input to output; 1st version
  c = getchar();
  while (c != EOF) {
    putchar(c);
    c = getchar();
  }
  */

  /* second version */
  while ( (c = getchar()) != EOF)
    putchar(c);
}
