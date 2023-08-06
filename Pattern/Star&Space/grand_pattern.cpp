#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        // printing first part  of numbers

        int j = 1;
        while (j <= n - i + 1)
        {
            cout << j;
            j = j + 1;
        }
        // printing 2nd part  of stars
        int k = 1;
        while (k <= (i - 1) * 2)
        {
            cout << "*";
            k = k + 1;
        }
        // printing 3nd part  of numbers
        j = n - i + 1;
        while (j >= 1)
        {
            cout << j;
            j = j - 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}