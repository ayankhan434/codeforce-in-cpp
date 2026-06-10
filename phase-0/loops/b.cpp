#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 2; i <= n; i = i + 2)
    {
        cout << i << endl;
    }
    if (n < 2)
    {
        cout << "-1" << endl;
    }
    return 0;
}