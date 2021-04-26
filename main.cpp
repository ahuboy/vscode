#include <iostream>
#include <vector>

using namespace std;

int main()
{
    unsigned m,n,x,y;
    cin>>m;
    vector<int>a(m);
    for (unsigned i=0;i<m;i++) cin>>a[i];
    cin>>n;
    vector<int>b(n);
    for (unsigned j=0;j<n;j++) cin>>b[j];

    for (x=0;x<m;x++) {
        if (b[0]==a[x]) break;
    }
    for (y=m-1;y>=0;y--) {
        if (b[n-1]==a[y]) break;
    }
    if (x==0&&y==0) cout<<"-1"<<endl;
    else cout<<x<<" "<<y<<endl;
    return 0;
}
