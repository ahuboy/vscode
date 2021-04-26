#include <stdio.h>
int main()
{
    int a[10], b[10];
    int i, j = 0, n;
    int temp;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            b[j++] = a[i];
        }
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            b[j++] = a[i];
        }
    }
    for (i = 0; i < n; i++)
        a[i] = b[i];

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
