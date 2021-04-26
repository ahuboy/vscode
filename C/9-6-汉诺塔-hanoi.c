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
    else
    {
        hanoi(m - 1, a, c, b);
        printf("%c->%c    ", a, c);
        hanoi(m - 1, b, a, c);
    }
}