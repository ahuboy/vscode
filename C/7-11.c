/*
#include <stdio.h>
int fun(int m, int a[])
{
    int i, k;
    if (m >= 10000)
    {
        for (i = 0, k = 10000; i < 5; i++, k /= 10)
        {
            a[i] = m / k % 10;
        }
        return 5;
    }
    else
    {
        for (i = 0, k = 1000; i < 4; i++, k /= 10)
        {
            a[i] = m / k % 10;
        }
        return 4;
    }
}
int fun1(int num)
{
    int tt = 0, numt = num;
    while (num)
    {
        tt = tt * 10 + num % 10;
        num /= 10;
    }
    if (numt == tt)
        return 1;
    else
        return 0;
}
int main()
{

    int a[5], k, i, num, m;
    double s = 0;
    //需要补全的代码
    scanf("%d%d", &num, &m);
    k = fun(num, a);
    for (i = num;; i++)
    {
        if (fun1(i))
        {
            k = fun(i, a);
            s = (double)(i - num) / m;
            break;
        }
    }
    printf("车速为%g公里/小时\n新里程数为：", s);
    for (i = 0; i < k; i++)
        printf("%d", a[i]);
    return 0;
}
*/
#include <stdio.h>
int main()
{

    int a[5];
    //需要补全的代码
    int k, i, num, m, temp;
    double s = 0;
    scanf("%d%d", &num, &m);
    if (num >= 10000)
    {
        for (i = 0, temp = 10000; i < 5; i++, temp /= 10)
        {
            a[i] = num / temp % 10;
        }
        for (i = num;; i++)
        {
            if ((i / 10000 == i % 10) && (i / 1000 % 10 == i % 100 / 10))
            {
                for (int j = 0, temp = 10000; j < 5; j++, temp /= 10)
                {
                    a[j] = i / temp % 10;
                }
                s = (double)(i - num) / m;
                k = 5;
                break;
            }
        }
    }
    else
    {
        for (i = 0, temp = 1000; i < 4; i++, temp /= 10)
        {
            a[i] = num / temp % 10;
        }
        for (i = num;; i++)
        {
            if ((i / 1000 == i % 10) && (i / 100 % 10 == i % 100 / 10))
            {
                for (int j = 0, temp = 1000; j < 4; j++, temp /= 10)
                {
                    a[j] = i / temp % 10;
                }
                s = (double)(i - num) / m;
                k = 4;
                break;
            }
        }
    }

    printf("车速为%g公里/小时\n新里程数为：", s);
    for (i = 0; i < k; i++)
        printf("%d", a[i]);
    return 0;
}