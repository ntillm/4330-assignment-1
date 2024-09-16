#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main(int argc, char *argv[])
{
    int result = add(2,2);
    printf("%d\n", result);

    return 0;
}
