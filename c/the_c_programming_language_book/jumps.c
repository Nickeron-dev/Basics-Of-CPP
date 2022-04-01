#include <stdio.h>
#include <setjmp.h>

jmp_buf buf;

void func()
{
    printf("Hello my friend\n");
  
    longjmp(buf, 1);
  
    printf("2\n");
}

int main(void)
{
    if (setjmp(buf))
        printf("3\n");
    else
    {
        printf("4\n");
        func();
    }
    return 0;
}

