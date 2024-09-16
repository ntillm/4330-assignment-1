#include <stdio.h>

int multiply(int a, int b) {
    return a * b;
}

int main(int argc, char *argv[])
{
    int result = multiply(2,2);
    printf("%d\n", result);

    return 0;
}
