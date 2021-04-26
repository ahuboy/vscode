#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class Triangle{
    private:
    double a,b,c;
    public:
    void setTriangle(double x,double y,double z){a=x,b=y,c=z;}
    void showTriangle(){cout << a << " " << b << " " << c << " ";}
    int judgeTriangle();
    double getArea(){
        double p=(a+b+c)/2;
        return sqrt (p*(p-a)*(p-b)*(p-c));
    }
};

int Triangle::judgeTriangle()
{
    if(a==b && b==c)
        return 1;
    else if(a == b || b==c || a==c)
        return 2;
    if(a*a+b*b==c*c || a*a+c*c==a*a || b*b+c*c ==a*a)
        return 3;
    return 4;
}

int main()
{
    Triangle tt;
    double x,y,z;
    cin >> x >> y >> z;
    cout<<setiosflags(ios::fixed)<<setprecision(2);
    tt.setTriangle(x,y,z);
    tt.showTriangle();
    cout << tt.judgeTriangle() << " " << tt.getArea();
    return 0;
}
