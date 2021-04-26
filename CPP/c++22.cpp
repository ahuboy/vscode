#include <iostream>
#include<cmath>

using namespace std;

double fun1(int i,double x)
{
    if(i==1)
        return 0.5*x;
    else
        return fun1(i-1,x)*(0.5-i+1)*x/i;
}

double fun(double x)
{
    double sn=1;
    for(int i=1;fabs(fun1(i,x)-fun1(i+1,x))>=1E-6;i++)
        sn+=fun1(i,x);
    return sn;
}

int main()
{
    double x;
    cin >> x;
    cout << fun(x);

    return 0;
}


