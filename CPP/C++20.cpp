#include<iostream>
using namespace std;
int fun(int x)
{
    int num=0,t=1;
    while(x>=10)
    {
        
        num=num+x%10*t;
        x/=10;
        t*=10;
    }
    return num;
}
int main()
{
    int x;
    cin >> x;
    cout << fun(x);
    return 0;
}