#include<stdio.h>
#include<vld_c.h>

int main(int argc, char *argv[])
{
    atexit(check_leak);
    int *p = (int*)malloc(sizeof(int));
    int *pa = (int*)malloc(sizeof(int)*10);
    return 0;
}
