#include <stdio.h>
#include <unistd.h>

int main()
{
   char *argv[]   = { "./show_envp", "42", NULL};
   char *envp[]   = { "42=bdddd.com", NULL};

   execve( "./show_envp", argv, envp);

   printf( "이 메시지가 보이면 지정된 프로그램이 \
없거나 어떤 문제로 실행되지 못한 것입니다.\n");
}