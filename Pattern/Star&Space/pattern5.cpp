#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        int spaces = 1;
        while (spaces <= n - i)
        {
            cout << " ";
            spaces = spaces + 1;
        }
        int star = 1;
        while (star <= i)
        {
            // cout << "*";
            cout << star;

            star = star + 1;
        }
        star = i - 1;
        while (star >= 1)
        {
            cout << star;
            star = star - 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}