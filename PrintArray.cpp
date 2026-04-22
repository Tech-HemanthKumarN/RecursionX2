#include <iostream>
using namespace std;
void pritArray(int arr[], int size, int index)
{
    // base case
    if (index == size)
    {
        return;
    }

    // recursive call
    // 1st I'll slove
    cout << arr[index] << " ";
    // remaing recursion gonna solve
    pritArray(arr, size, index + 1);
}

bool searchInArray(int arr[], int size, int index, int target)
{
    // base case
    if (index >= size)
    {
        return false;
    }
    if (arr[index] == target)
    {
        return true;
    }

    bool ans = searchInArray(arr, size, index + 1, target);
    return ans;
}
int main()
{

    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int size = 6;
    int index = 0;
    pritArray(arr, size, index);

    cout<<endl;
    cout << "-----------------> searchInArray<------------------------" << endl;
    // searchInArray
    int target = 50;
    cout << searchInArray(arr, size, index, target) << endl;
    return 0;
}