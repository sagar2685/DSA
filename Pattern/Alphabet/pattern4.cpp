#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char ch = 'A';
    int i = 1;
    while (i <= n)
    {
        char ch = 'A' + i - 1;
        int j = 1;

        while (j <= n)
        {

            cout << ch;
            ch = ch + 1;

            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}