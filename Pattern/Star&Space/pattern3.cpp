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
        while (spaces <= i - 1)
        {
            cout << " ";
            spaces = spaces + 1;
        }
        int star = 1;
        while (star <= n - i + 1)
        {
            cout << i;
            star = star + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}