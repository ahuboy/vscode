#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    int num;
    string name;
    int age;
    static int count;

public:
    Student(int a, string b, int c) : num(a), name(b), age(c) { count++; }
    void Show()
    {
        cout << num << " " << name << " " << age << endl;
    }
    void static ShowCount()
    {
        cout << "共有" << count << "个学生" << endl;
    }
};
int Student::count = 0;
int main()

{

    Student st1(1000, "张三", 32);

    Student st2(1001, "李四", 31);

    Student st3(1002, "王五", 28);

    st1.Show();

    st2.Show();

    st3.Show();

    Student::ShowCount();

    return 0;
}