#include <stdio.h>

int main ()
{
    int i, n, k, sum = 0, t;

    scanf("%d%d", &n, &k);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &t);
        if (t > k)
        sum++;
    }
    printf("%d\n", sum);
    return (0);

}
