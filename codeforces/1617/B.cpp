#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void    solve(int target)
{
    int mid;

    if (!(target % 2))
        printf("%d %d %d\n", target - 3, 2, 1);
    else
    {
        mid = (target - 1) / 2;
        if (mid % 2)
            printf("%d %d %d\n", mid - 2, mid + 2, 1);
        else
            printf("%d %d %d\n", mid - 1, mid + 1, 1);
    }
}

int main()
{
    int total;
    int target;

    scanf("%d", &total);
    while (total--)
    {
        scanf("%d", &target);
        solve(target);
    }
    return (0);
}