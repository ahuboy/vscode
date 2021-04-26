#include <iostream>

using namespace std;

int fun(int x)
{
    int num=1;
    for(int i=1;i<=x;i++)
        num*=x;
    return num;
}

int nfun(int x)
{
    int num=0;
    for(int i=1;i<=x;i++)
        num+=fun(i);
    return num;
}

int main()
{
    int a;
    cin >> a ;
    cout << nfun(a);

    return 0;
}

