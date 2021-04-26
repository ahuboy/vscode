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