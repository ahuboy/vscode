#include <iostream>
#include <iomanip>

using namespace std;

class Rectangle{
    private:
    double x,y;
    public:
    void setRectangle(double a,double b){x = a,y = b;}
    void showRectangle(){cout << x << " " << y << " ";}
    void getGirth(){cout << 2*(x + y) << " ";}
    void getArea(){cout << x*y<< " ";}
};
int main()
{
    Rectangle tt;
    double a,b;
    cin >> a >> b;
    cout<<setiosflags(ios::fixed)<<setprecision(2);
    tt.setRectangle(a,b);
    tt.showRectangle();
    tt.getGirth();
    tt.getArea();
    return 0;
}