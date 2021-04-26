#include <iostream>
#include<cmath>

using namespace std;



int fun1(int x)
{
    int i=sqrt(x);
    if(i*i==x)
        return 1;
    else
        return 0;
}
int fun2(int x)
{
    int  a=x%10,b=x/10%10,c=x/100;

    if(a!=b && b!=c && a!=c)
        return 1;
    else
        return 0;
}
int fun3(int x)
{
    int  a=x%10,b=x/10%10,c=x/100;

    if(a<b && b<c)
        return 1;
    else
        return 0;
}

int main()
{
    int a;
    cin >> a;
    cout << fun1(a)*fun2(a)*fun3(a);

    return 0;
}

