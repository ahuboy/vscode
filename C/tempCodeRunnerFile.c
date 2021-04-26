#include <stdio.h>
void hanoi(int m, char a, char b, char c);
int main()
{
    int n;
    scanf("%d", &n);
    hanoi(n, 'A', 'B', 'C');
    return 0;
}
void hanoi(int m, char a, char b, char c)
{
    if (m == 1)
    {
        printf("%c->%c    ", a, c);
    }
    else if (m == 2)
    {
        printf("%c->%c    ", a, b);
        printf("%c->%c    ", a, c);
        printf("%c->%c    ", b, c);
    }
    else
    {
        hanoi(m - 1, 'A', 'C', 'B');
        printf("%c->%c    ", a, c);
        hanoi(m - 1, 'B', 'A', 'C');
    }
}