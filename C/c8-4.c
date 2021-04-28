/*
#include<stdio.h>
int main()
{
    int a[2][3]={{1,0,1},{0,1,1}},b[3][2],c[2][2]={0};
    int i,j,k;
    for(i=0;i<3;i++)
        for(j=0;j<2;j++)
            scanf("%d",&b[i][j]);
    for(i=0;i<2;i++)
    {
        for(k=0;k<2;k++)
            for(j=0;j<3;j++)
                c[i][k]+=a[i][j]*b[j][k];
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
            printf("%3d",c[i][j]);
        printf("\n");
    }
}
*/
#include <stdio.h>
int main()
{
    int a[2][3] = {{1, 0, 1}, {0, 1, 1}}, b[3][2], c[2][2] = {0};
    int i, j, k = 0;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 2; j++)
            scanf("%d", &b[i][j]);
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            for (k = 0; k < 3; k++)
                c[i][j] += a[i][k] * b[k][j];
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            printf("%3d", c[i][j]);
        printf("\n");
    }
}
