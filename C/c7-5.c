#include <stdio.h>
int main()
{
    int i,n=12;
    float num,a[12]={5,0.3,0.2,1,0.9,3,7,15,10,13,0.1,2};
    scanf("%f",&num);
    for(i = 0;i<n;i++)
        if(a[i]<num)
        {
            for(int j=i;j<n-1;j++)
            {
                a[j]=a[j+1];
            }
            i--;
            n--;
        }
   for(i = 0; i<n; i++)
        printf("%.1f ", a[i]);
    return 0;
}