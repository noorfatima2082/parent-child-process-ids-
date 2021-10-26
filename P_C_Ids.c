#include <unistd.h>
#include <stdio.h>
int main()
{
  printf("Parent Process Id = %d\nChild Process Id = %d\n", getppid(),getpid());
  return 0;
}
