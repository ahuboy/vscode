#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr1;
    vector<int> arr2(2);
    vector<vector<int>> arr3(0, arr2);
    int temp1, temp2;
    while (cin >> temp1 >> temp2)
    {
        arr1.push_back(temp1);
        arr1.push_back(temp2);
        arr2.push_back(temp1);
        arr2.push_back(temp2);
        arr3.push_back(arr2);
    }
    cout << arr1.size() << " " << arr2.size() << " " << arr3.size();
}