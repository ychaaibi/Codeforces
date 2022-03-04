#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    long long int n;
    long long int m;
    long long int a;
    
    scanf("%lld %lld %lld", &n, &m, &a);
    if (m % a)
        m = m / a + 1;
    else
        m /= a;
    if (n % a)
        n = n / a + 1;
    else
        n /= a;
    printf("%lld\n", n * m);
    return (0);
}