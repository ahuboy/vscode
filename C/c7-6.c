#include <stdio.h>
void fun(int n,int a[])
{
    int temp=a[n];
    for(int i=n;i<9;i++)
        a[i]=a[i+1];
    a[9]=temp;
}
int main()
{
    /*
    int a[10]={3,6,1,0,5,2,7,8,3,4};
    int i,t=0,num,flag=0;
    scanf("%d",&num);
    for(i = 0;i<10;i++)
        if(a[i]<num)
        {
            int temp = a[i];
            a[i]=a[t];
            a[t]=temp;
            t++;
        }
    for(i = 0;i<10;i++)
        if(a[i]==num)
        {
            flag = 1;
            int temp = a[i];
            a[i]=a[t];
            a[t]=temp;
        }
        */
       /*
    int a[10]={3,6,1,0,5,2,7,8,3,4},b[10];
    int i,t=0,num,flag=0;
    scanf("%d",&num);
    for(i = 0;i<10;i++)
        if(a[i]<num)
            b[t++]=a[i];
    for(i = 0;i<10;i++)
        if(a[i]==num)
        {
            b[t++]=a[i];
            flag=1;
        }
    for(i = 0;i<10;i++)
        if(a[i]>num)
            b[t++]=a[i];
    for(i = 0;i<10;i++)
        a[i]=b[i];
    */
    int a[10]={3,6,1,0,5,2,7,8,3,4};
    int i,t=0,num,flag=0;
    scanf("%d",&num);
    for(i = 0;;i++)
    {
        if(a[i]>=num)
        {
            fun(i,a);
            i--;
            t++;
        }
        if(t>=10)
            break;
    }        
    for(i = 0;i<10;i++)
        if(a[i]==num)
        {
            fun(i,a);
            flag=1;
        }
if(flag)
   for(i = 0; i<10; i++)
        printf("%d ", a[i]);
else
   printf("Wrong number!");
    return 0;
}


