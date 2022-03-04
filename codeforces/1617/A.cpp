#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

char    *cannot_be_sub(int *s_alpha, int len)
{
    char    *target_perm;
    int     s_i;
    int     alpha_i;

    target_perm = (char *)malloc(sizeof(char) * (len + 1));
    target_perm[len] = 0;
    s_i = 0;
    alpha_i = 0;
    while (alpha_i < 26)
    {
        while (s_alpha[alpha_i]--)
            target_perm[s_i++] = alpha_i + 97;
        alpha_i++;
    }
    return (target_perm);
}

char    *it_sub(int *s_alpha, int len)
{
    char    *target_perm;
    int     s_i;
    int     alpha_i;

    target_perm = (char *)malloc(sizeof(char) * (len + 1));
    target_perm[len] = 0;
    s_i = 0;
    alpha_i = 3;
    while (s_alpha[0]--)
        target_perm[s_i++] = 97;
    while (s_alpha[2]--)
        target_perm[s_i++] = 99;
    while (s_alpha[1]--)
        target_perm[s_i++] = 98;
    while (alpha_i < 26)
    {
        while (s_alpha[alpha_i]--)
            target_perm[s_i++] = alpha_i + 97;
        alpha_i++;
    }
    return (target_perm);
}       

int     could_be_sub(char *s)
{
    int i;

    i = 0;
    while (s[++i])
        if (s[i] < s[i - 1])
            return (0);
    return (1);
}

void    solve(char *s, char *t)
{
    int alpha[26];
    int i;

    memset(alpha, 0, sizeof(int) * 26);
    i = 0;
    while (s[i])
        alpha[s[i++] - 97]++;
    if (!alpha[0] || !alpha[1] || !alpha[2] || !could_be_sub(t))
        printf("%s\n", cannot_be_sub(alpha, strlen(s)));
    else
        printf("%s\n", it_sub(alpha, strlen(s)));
}

int main()
{
    int     total;
    char    *s;
    char    *t;
    int     i;

    i = 0;
    s = (char *)malloc(sizeof(char) * 101);
    t = (char *)malloc(sizeof(char) * 4);
    scanf("%d", &total);
    while (i++ < total)
    {
        scanf("%s", s);
        scanf("%s", t);
        solve(s, t);
    }
    return (0);
}