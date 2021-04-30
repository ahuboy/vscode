#include <iostream>
#include <iomanip>
using namespace std;
class Date
{
private:
    int y, m, d;

public:
    Date(int y, int m, int d) : y(y), m(m), d(d) {}
    Date(){};
    void SetDate(int y1, int m1, int d1)
    {
        y = y1;
        m = m1;
        d = d1;
    }
    void Show()
    {
        //setw �� setfillֻ�ܶԺ���һ�������Ч 
        cout << y << "-" << setw(2) << setfill('0')<< m << "-" << setw(2) << setfill('0')<< d << endl;
    }
    void Jugde()
    {
        if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0))
            cout << y << "��������" << endl;
        else
            cout << y << "�겻������" << endl;
    }
};
int main()
{
    Date dd;
    int y, m, d;
    cin >> y >> m >> d;
    dd.SetDate(y, m, d);
    dd.Show();
    dd.Jugde();
}