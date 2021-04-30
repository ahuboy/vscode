#include<stdio.h>
int fac(int n);
int main()
{
    int n;
    scanf("%d",&n);
    printf("因子：");
    printf("\n因子和：%d",fac(n));
    return 0;
}
int fac(int n)
{
    int i,sum=0;
    for(i=1;i<=n;i++)
        if(n%i==0)
        {
            printf("%d ",i);
            sum+=i;
        }
    return sum;
}