#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    cout << x + y << "\n"
         << x - y << "\n"
         << x * y << "\n"
         << (long long)x / y << "\n";
    return 0;
}