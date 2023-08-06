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
    int f = firstPosition(arr, 6, 3);
    int l = lastPosition(arr, 6, 3);
    int n = (l - f) + 1;
    cout << "No of Occurencce :-" << n;
    return 0;
}