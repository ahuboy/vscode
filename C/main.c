#include <stdio.h>
int main()
{
    int a[10];
    int i, j ,n;
    int temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
            for(j=i+1;j<n;j++)
            {
                if(a[j]%2!=0)
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                    break;
                }
            }
    }
   for(i = 0; i<n; i++)
        printf("%d ", a[i]);
    return 0;
}
