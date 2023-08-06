#include <iostream>
using namespace std;
int pivoit(int arr[], int n)
{
    int s = 0, e = n - 1;
    int mid = s + ((e - s) / 2);
    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + ((e - s) / 2);
    }
    return e;
}

int main()
{
    int arr[5] = {3, 4, 6, 1, 2};
    cout << "Pivoit is"
         << " " << pivoit(arr, 5);
    return 0;
}