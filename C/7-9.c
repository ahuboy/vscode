#include <stdio.h>
int main()
{
    //��Ҫ��ȫ�Ĵ���
    int min1, min2, k1, k2;
    int i, a[10], temp;
    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    min1 = min2 = a[0];
    k1 = k2 = 0;
    for (i = 1; i < 10; i++)
    {
        if (a[i] < min2)
        {
            min2 = a[i];
            k2 = i;
        }
        if (min2 < min1)
        {
            temp = min2;
            min2 = min1;
            min1 = temp;
            temp = k1;
            k1 = k2;
            k2 = temp;
        }
    }

    printf("��Сֵ%d���±�Ϊ%d\n", min1, k1);
    printf("��Сֵ%d���±�Ϊ%d\n", min2, k2);
    return 0;
}
