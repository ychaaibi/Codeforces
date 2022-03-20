#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main()
{
    int n, k;
    int *arr, *arr1;
    int count[5001];
    int i = -1;
    int c2 = 0;
    scanf("%d %d", &n, &k);
    arr = (int *)malloc(sizeof(int) * n);
    arr1 = (int *)malloc(sizeof(int) * n);
    memset(count, 0, sizeof(int) * 5001);
    while (++i < n)
    {
        scanf("%d", &arr[i]);
        count[arr[i]]++;
        if (count[arr[i]] > k)
        {
            printf("NO\n");
            return (0);
        }
    }
    printf("YES\n");
    int j = 0;
    i = 0;
    int start = 0, step = 0;
    int color = 1, value;
    while (i < n)
    {
        if (arr[i] != -1)
        {
            j = i;
            value = arr[i];
            while (j < n)
            {
                if (arr[j] == value)
                {
                    arr1[j] = color;
                    arr[j] = -1;
                    color++;
                    if (color > k)
                        color = 1;
                }
                j++;
            }
        }
        i++;
    }
    i = 0;
    while (i < n)
    {
        printf("%d ", arr1[i++]);
    }
    return (0);
}