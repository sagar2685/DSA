#include <iostream>
using namespace std;
int firstPosition(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + ((e - s) / 2);
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        mid = s + ((e - s) / 2);
    }
    return ans;
}
int lastPosition(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + ((e - s) / 2);
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        mid = s + ((e - s) / 2);
    }
    return ans;
}
int main()
{
    int arr[6] = {1, 2, 3, 3, 3, 7};
    cout << firstPosition(arr, 6, 3) << " " << lastPosition(arr, 6, 3);

    return 0;
}