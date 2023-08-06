#include <iostream>
using namespace std;
bool search(int arr[], int size, int key)
{
    for (int i = 1; i <= size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[5] = {2, -4, 5, 7, -9};
    int key;
    cout << "Enter Key";
    cin >> key;
    bool found = search(arr, 5, key);
    if (found)
    {
        cout << "Present ";
    }
    else
    {
        cout << "Absent";
    }
    return 0;
}