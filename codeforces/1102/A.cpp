#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    int n;

    scanf("%d", &n);
    if (!((n * (n + 1) / 2) % 2))
        printf("0");
    else
        printf("1");
    return (0);
}