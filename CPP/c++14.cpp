#include <iostream>

using namespace std;

int fun(int i,int j)
{
    if (i%j!=0)
        return 0;
    else
        return 1+fun(i/j,j);
}
int main()
{
    int i,j;
    cin >> i >> j;
    cout << fun(i,j);

    return 0;
}

