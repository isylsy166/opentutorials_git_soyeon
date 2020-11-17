#include <stdio.h>

int main()
{
    int i = 10;
    increment(i);
    increment(i);

    return 0;
}

int increment(int i)
{
    int j = 5;
    static k = 20;
    printf("i = %d, j = %d, k = %d\n", ++i, ++j, ++k);
}

