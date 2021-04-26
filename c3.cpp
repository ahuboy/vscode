#include <iostream>
#include <cmath>

using namespace std;

int fun(int x)
{
    for(int i=2;i<=sqrt(x);i++)
        if(x%i==0)
            return 0;
    return 1;
}

int main()
{
    int x;
    cin >>x;
    for(int i=x;;i--)
        if(fun(i)&&fun(i-2))
        {
            cout <<i-2 << " "<<i;
            break;
        }
    return 0;
}