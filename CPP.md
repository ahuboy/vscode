# 1.
```cpp
#include <iostream>
using namespace std;
class CC{
private:
    int a,b,c;
public:
    CC(int x,int y,int z):a(x),b(y),c(z){};
    void show(){cout << a << " " << b << " " << c;};
};

int main()
{
    CC a(3,4,5);
    a.show();
    return 0;
}
```
其中，`CC(int x,int y,int z):a(x),b(y),c(z){};`，是使用在类的构造函数中，`a(x),b(y),c(z)`代表给私有成员a,b,c赋值；
# 2.const 常变量/常对象
常变量：`const double pi = 3.14`，代表变量`pi`是一个常变量，在其有效范围内，不能修改；
常对象：`const classname objname；`，则该objname对象为常对象，在有效范围内不能修改，并且只能调用常成员函数，其余成员，不能调用。例如：
```cpp
#include <iostream>
using namespace std;
class CC{
private:
    int a,b,c;
public:
    CC(int x,int y,int z):a(x),b(y),c(z){};
    void show(){cout << a << " " << b << " " << c << endl;};
    void show() const {cout << "const:" << a << " " << b << " " << c << endl;};
};

int main()
{
    CC a(3,4,5);
    a.show();
    const CC b(5,6,7);
    b.show();
    return 0;
}
```
输出为：
> 3 4 5
const:5 6 7

其中，通过`const`，实现常成员函数与普通成员函数之间的重载。常对象调用常成员函数。如果定义一个普通成员函数`void SetCC(int x,int y,int z){a=x,b=y,c=z;}`，则a能调用`SetCC`函数，b不能调用`SetCC`函数。

# 3.引用传递
```cpp
#include <iostream>
using namespace std;
void fun(int a){
    a+=10;
}
int main()
{
    int a=10;
    fun(a);
    cout << a;
    return 0;
}
```
```cpp
#include <iostream>
using namespace std;
void fun(int &a){
    a+=10;
}
int main()
{
    int a=10;
    fun(a);
    cout << a;
    return 0;
}
```
其中，第一个程序，输出结果为`10`，第二个程序输出结果为`20`，因为第二个程序在函数定义时，形参`a`的前面添加了`&`，使其变为了引用传递，即函数中形参的变化，可以直接传递到主函数中的实参。

# 4.关于常引用
在函数定义时，常引用的形式`void fun(const int &a)`，在该常引用中，`a`不可被修改。

# 5.函数的重载
函数重载：函数形意时，形参类型或者形参个数不同可以形成重载，而形参名、返回值类型不能作为函数重载的条件。

# 6.输出两位保留两位小数
```cpp
#include <iomanip>
cout<<setiosflags(ios::fixed)<<setprecision(2);
```
先引用可函数，在输出之前写上上述`cout`代码，后续的浮点数即可按照两位小数输出。

# 7.静态生存期
`static int a=10;`，静态变量的生存期与程序的运行期完全相同。

# 8.类的静态成员
类的静态成员是为了解决同一个类中不同对象之间的数据共享的问题的，例如一个员工类当中，还需要数据成员，是员工总数，如果这个数据放在类的外部不利于数据的隐藏，放在类的内部，不利于类的不同对象之间的数据一直，所以变成静态成员。
```cpp
#include <iostream>
using namespace std;
class Point{
public:
    Point(int x,int y):x(x),y(y){
    count++;
    }
    Point(Point &p){
    x=p.x;
    y=p.y;
    count++;
    }
    ~Point(){count--;}
    void show(){cout << x << " " << y << endl; }
    void show_count(){cout << count <<endl;}
private:
    int x,y;
    static int count;
};
int Point::count = 0;
int main()
{
    Point a(3,4);
    Point b(a);
    a.show();
    b.show();
    a.show_count();
    b.show_count();
    a.~Point();
    b.show_count();
    return 0;
}
```

# 9.vector对象

```cpp
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int num;
    cin >> num;
    vector<int> arr(num);
    for (int i = 0; i < num; i++)
        cin >> arr[i];
    for (int i = 0; i < num; i++)
        cout << arr[i] << "  ";
    cout << endl;
    int *arr_1 = new int[arr.size()];
    for (int i; i < arr.size(); i++)
        arr_1[i] = arr[i];
    for (int i = 0; i < num; i++)
        cout << arr_1[i] << "  ";
    return 0;
}
```



通过vector创建的arr是一个数组对象，不是一个普通数组，数组是一组相同类型元素的集合，而数组对象里面除了有这样一组相同类型的元素还有其他数据。所以arr是这个对象的名字，不是数组的首地址。vector定义的数组对象里面封装了一个公有成员函数size()用来返回数组元素的个数。

在上面的程序中，vector创建的对象arr中不止包含了arr_1中的所有元素，还有其他内容，也可以认为arr中封装了arr_1中的内容。

# 10.vector实例1

```cpp
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr1(2);//定义一个一维vector数组
    vector<vector<int>> arr(0, arr1);//建立一个二维vector数组，前面的0表示不预设数组长度，arr1表示基数组（行）
    while (cin >> arr1[0] >> arr1[1])//cin放到while循环里面，表述循环时输入数值，以Ctrl+z结束
    {
        arr.push_back(arr1);//由于arr1是基数组，所以将数据放到arr1里面，在通过push_back函数将arr1赋值到arr数组的末尾
    }
    for (int i=arr.size()-1; i >= 0; i--)//通过size函数确定输入了多少个元素
    {
        cout << "[" << arr[i][0] << "," << arr[i][1] << "]" << endl;
    }
}
```

# 11.vector实例2

```cpp
#输入若干字符串，将其中回文串保存在vector对象，然后输出。
#include <string>
#include <vector>
#include <iostream>
using namespace std;
int fun(const string &arr)
{
    int i=0,j=arr.size()-1;
    while(i<j)
    {
        if(arr[i]!=arr[j])
            return 0;
        i++,j--;
    }
    return 1;
}
int main()
{
    vector<string> arr;
    string temp;
    while(cin >> temp)
    {
        if(fun(temp))
            arr.push_back(temp);
    }
    for(int i = 0;i<arr.size();i++)
        cout << arr[i]<<endl;
}
```

# 12.vector实例3

```cpp
#输入若干字符串，将其中回文串保存在vector对象，然后排序输出。
#include <string>
#include <vector>
#include <iostream>
using namespace std;
int fun(const string &str)//vector作为参数传递时，必须写上上述的样子
{
    int i = 0, j = str.size() - 1;
    while (i < j)
    {
        if (str[i] != str[j])
            return 0;
        i++, j--;
    }
    return 1;
}
void fun1(vector<string> &arr)
{
    int i, j;
    for (i = 0; i < arr.size() - 1; i++)
        for (j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] > arr[j])
            {
                string temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
}
int main()
{
    vector<string> arr;
    string str;
    while (cin >> str)
    {
        if (fun(str))
            arr.push_back(str);
    }
    fun1(arr);
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << endl;
}
```



