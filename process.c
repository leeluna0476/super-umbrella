#include <stdio.h>
#include <unistd.h>

void foo() {
  printf("execute foo\n");
}

void bar() {
  printf("execute bar\n");
}

void baz() {
  printf("execute baz\n");
}

int main()
{
   if (fork() == 0) {
      if (fork() == 0) {
        printf("child of child process %d\n", getpid());
	foo();
      }
      else {
	printf("child process %d\n", getpid());
        bar();
      }
   }
   else {
     printf("parent process %d\n", getpid());
     baz();
   }

   return 0;
}
