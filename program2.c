#include <stdio.h>

int divide(int a, int b)
{
    return a/b;
}

int main(int argc, char *argv[])
{
    int result = divide(2,2);
    printf("%d\n", result);

    return 0;
}
