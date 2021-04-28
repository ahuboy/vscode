#include <stdio.h>
int main()
{
    int a[12],i,j,num,ni=0,nt=0;
    for(i = 0;i<12;i++)
        scanf("%d",&a[i]);
    for(i = 0;i<12;i++)
    {
        num=0;
        for(j = 0;j<12;j++)
            if(a[i]==a[j])
                num++;
        if(num>=nt)
            nt=num,ni=i;
    }
    printf("num: %d, times=%d",a[ni],nt);
}