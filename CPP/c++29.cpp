#include <iostream>

using namespace std;

int fun(int x,int n)
{
    if(n==0)
        return 1;
    else if(n==1)
        return 2*x;
    else
        return 2*x*fun(x,n-1)-2*(n-1)*fun(x,n-2);
}


int main()
{
    int a,b;
    cin >> a >>b;
    cout << fun(a,b);

    return 0;
}

