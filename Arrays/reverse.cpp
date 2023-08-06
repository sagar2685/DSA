#include <iostream>
using namespace std;

void reverse(char arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void print(char arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    char arr[5] = {'a', 'b', 'c', 'd', 'e'};
    char brr[6] = {'a', 'b', 'c', 'd', 'e', 'f'};
    reverse(arr, 5);
    reverse(brr, 6);
    print(arr, 5);
    print(brr, 6);
    return 0;
}
