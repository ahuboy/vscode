#include <iostream>
#include <vector>
using namespace std;
/*
int main()
{
    vector<int>a;
    int i,num;
    while(cin >> num)
    {
        a.push_back(num);
    }
    for(i=0;i<a.size();i++)
        cout << a[i] << endl;
}
*/
int main()
{
    vector<int> arr1(2);//定义一个一维vector数组
    vector<vector<int>> arr(0, arr1);//建立一个二维vector数组，前面的0表示不预设数组长度，arr1表示基数组（行）
    while (cin >> arr1[0] >> arr1[1])//cin放到while循环里面，表述循环时输入数值，以Ctrl+z结束
    {
        arr.push_back(arr1);//由于arr1是基数组，所以将数据放到arr1里面，在通过push_back函数赋值到vector数组的末尾
    }
    for (int i=arr.size()-1; i >= 0; i--)//通过size函数确定输入了多少个元素
    {
        cout << "[" << arr[i][0] << "," << arr[i][1] << "]" << endl;
    }
}