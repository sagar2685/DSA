#include <iostream>
using namespace std;
int getMax(int num[], int size)
{
    int maxi = INT16_MIN;
    for (int i = 1; i <= size; i++)
    {
        // maxi = max(maxi, num[i]);
        if (num[i] > maxi)
        {
            maxi = num[i];
        }
    }
    return maxi;
}
int getMin(int num[], int size)
{
    int mini = INT16_MAX;
    for (int i = 1; i <= size; i++)
    {
        // mini = min(mini, num[i]);
        if (num[i] < mini)
        {
            mini = num[i];
        }
    }
    return mini;
}

int main()
{
    int size;
    cin >> size;
    int num[100];
    // taking input
    for (int i = 1; i <= size; i++)
    {
        cin >> num[i];
    }
    cout << "Maximum element is" << getMax(num, size) << endl;

    cout << "Minumum element is" << getMin(num, size);

    return 0;
}