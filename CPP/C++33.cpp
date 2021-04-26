#include<iostream>
#include<cmath>
using namespace std;
const double pi = 3.14;
class Cylinder{
    private:
    int h,r;
    public:
    void setCylinder(int a,int b){h=a;r=b;}
    double getVol(){return pi*r*r*h;}
    double getArea(){return pi*2*r*h+pi*r*r*2;}
};
int main()
{
    Cylinder tt;
    int a,b;
    cin >> a >> b;
    tt.setCylinder(a,b);
    cout << round(tt.getVol()) << "\n" << round(tt.getArea());
    return 0;
}