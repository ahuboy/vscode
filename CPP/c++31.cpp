#include <iostream>

using namespace std;

int rever(int x)
{
    int num=0;
    while(x)
    {
        num=num*10 + x%10;
        x/=10;
    }
    return num;
}

int reverseAdd(int a,int b)
{
    return rever(a)+rever(b);
}

int main()
{
    int a,b;
    cin >> a >> b;
    cout << reverseAdd(a,b);

    return 0;
}

