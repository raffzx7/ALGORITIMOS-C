#include <stdio.h>
#include <time.h>

void wait ( int seconds )
{
  clock_t endwait;
  endwait = clock () + seconds * CLK_TCK;
  while (clock() < endwait) {}
}

int main ()

{
  int n;
  printf ("contagem regressiva....\n");
  for (n=10; n>0; n--)
  {
    printf ("%d\n",n);
    wait (1);
  }
  printf ("acabou\n");
  return 0;
}
