#include <string>
#include <vector>
#include <iostream>
using namespace std;
int fun(const string &str)
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