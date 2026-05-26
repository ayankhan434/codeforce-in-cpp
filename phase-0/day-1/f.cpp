#include <iostream>
using namespace std;
int main()
{
    long a, b;
    cin >> a >> b;

    int x = (long long)a % 10 + (long long)b % 10;
    cout << x << endl;
    return 0;
}
